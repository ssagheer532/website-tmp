/* receive.c - receive */

#include <xinu.h>

/*------------------------------------------------------------------------
 *  receive  -  Wait for a message and return the message to the caller
 *------------------------------------------------------------------------
 */
umsg32	receive(void)
{
	intmask	mask;			/* Saved interrupt mask		*/
	struct	procent *prptr;		/* Ptr to process' table entry	*/
	umsg32	msg;			/* Message to return		*/

	mask = disable();
	prptr = &proctab[currpid];
	if (prptr->prhasmsg == FALSE) {
		prptr->prstate = PR_RECV;
		resched();		/* Block until message arrives	*/
	}
	msg = prptr->prmsg;		/* Retrieve message		*/
	prptr->prhasmsg = FALSE;	/* Reset message flag		*/

	//Syed Sagheer Added code here:
	//added code for dequeuing blocked procs
	if (isempty( prptr->sendqueue ) == 0) {
			pid32 newProc = dequeue( prptr->sendqueue );
			struct	procent * prptr2 = &proctab[newProc];
			prptr->prmsg = prptr2->sendblkmsg;
			prptr2->sendblkflag = 0;
			ready(newProc);
		}
	if (isempty( prptr->sendqueue )){
		prptr->rcpblkflag = 0;
	}

	restore(mask);
	return msg;
}

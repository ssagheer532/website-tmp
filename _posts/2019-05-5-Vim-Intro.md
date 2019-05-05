---
layout: post
title: What is Vim?
feature-img: "assets/img/sample_feature_img.png"
tags: [Tools]

---

**An introduction to Vim and why every engineer should know it** 

Vim at its core is just a powerful text editor. While it may seem unintuitive and difficult at first, it is one of the most efficient ways of editing text because it all runs in the terminal. That's right, in order to use vim you don't need to open up a new application and deal with any GUI. This also means vim is very quick and lightweight whicih makes it great for doing any remote editing. If I want to ssh into a different computer and edit some code, I don't have easy access to any GUI based editors like Atom or Sublime. However, as long as you have access to the terminal you have access to vim.  

**You don't need to become a Vim expert**

When I first learned vim I got hung up on “learning” Vim because of the jokes about not being able to exit. Although there is a bit of complexity to vim, for all the power it gives you it's fairly easy to get started. 


## Below are some common commands and use cases for Vim 

#### Opening and closing files

To open a file in vim, just type 

```bash
vim <filename>
```

To save and exit files, you must be in command mode (click esc). You must type the `:` before each of the lettered commands.

- **:q** &nbsp;&nbsp;&nbsp;exit editor
- **:w** &nbsp;&nbsp;&nbsp;save changes
- **:wq** &nbsp;save changes and exit editor
- **:q!** &nbsp;&nbsp;&nbsp;force quit editor without saving changes


#### Moving through the text

- **h** &nbsp;&nbsp;move the cursor to the left
- **l** &nbsp;&nbsp;&nbsp;move it to the right
- **k** &nbsp;&nbsp;move up
- **j** &nbsp;&nbsp;&nbsp;move down
- or use the arrow keys
<br>
- **^** &nbsp;&nbsp;&nbsp;move the cursor to the begnning of the line
- **$** &nbsp;&nbsp;&nbsp;move the cursor to the end of the line
- **gg** &nbsp;move the cursor to the beginning of file
- **G** &nbsp;&nbsp;&nbsp;move the cursor to the end of the file

#### Get into Insert Mode

- This will allow you to type and make changes just like you would in gedit or similar
- **i** &nbsp;&nbsp;insert mode 

> To exit editing mode and go into command mode, press `ESC` key.

#### Editing Text in Command Mode (The Basics)
- **dd**  &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;will delete current line and copy it to your clipboard
- **v**   &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;will allow you to use arrow keys to highlight text (pressy `ESC` to exit out of highlight)
- **y**   &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;will alllow you to copy highlighted text to clipboard
- **p**   &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;will alllow you to paste copied text
- **u**   &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;will alllow you to undo 
- ***n* dd**  &nbsp; &nbsp;&nbsp;will delete ***n*** lines including and below current line
- **dw** &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;will delete the word to the right of the cursor
- ***n* dw**  &nbsp; &nbsp;will delete ***n*** words to the right of the cursor
- **x**  &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;will delete letter highlighted by the cursor 
- **:n** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;go to the ***n***th line in the file.

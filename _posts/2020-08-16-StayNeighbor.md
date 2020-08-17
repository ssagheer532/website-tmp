---
layout: post
title: My Experience Working on StayNeighbor.com
feature-img: "assets/img/sample_feature_img.png"
tags: [Experience]
---

#### StayNeighbor

StayNeighbor is a free logistics tool for community mobilization created by a group of amazing software engineers, entrepreneurs, and designers. It is designed to connect those with means, to those with needs in a safe, healthy and organized way during the COVID-19 pandemic. Imagine you're running a food bank in a city where COVID-19 cases are spiking every day. It's too dangerous for those in need to go to the food bank and you don't have a system in place for delivery. This is the reality of thousands of Americans and we wanted to figure out a solution. StayNeighbor is a website that allows communities to aggregate data on both the availability of resources, such as food or personal protective equipment, into one centralized location. From there, community organizations are able to see where needs exist so that goods and services can be dispatched via volunteer delivery drivers. If someone in need relies on food donations or other types of charity, instead of risking their life and going in person they can now simply request their needs on StayNeighbor.com.

#### The Tech Powering It

The backend is powered by MongoDB Realm (used to be called MongoDB Stitch) which is essentially MongoDB's cloud platform. When talking about where to host our server we debated against using AWS or Azure but MongoDB Realm was giving free compute power to projects related to COVID-19, plus I wanted to learn new technology since I use AWS at work. One of the great things about MongoDB Realm is how easy it is to get started. We had our first API using a serverless Realm function (similar to an AWS Lambda) ready in a day. We saved all of our data in MongoDB Atlas, which is essentially a cloud NoSQL database. The main reason we chose NoSQL was because MongoDB Atlas was already integrated in MongoDB Realm and as a result was very cheap to use, but for our needs a SQL database would have made more sense. Although MongoDB Realm seemed great at first, we quickly realized some of its limitations.

Our first issue was that there was on easy way to programmatically test our backend APIs. Although we could test the functions through the MongoDB Realm UI, we had to pass in test input each time which meant two developers weren't always testing with the same data. At the time there was no easy way to run an entire test suit through any sort of CICD pipeline either which introduced some bugs. For example, I wrote an API to grab all the user data from the database and a couple days later someone else integrated it to include the user's latitude and longitude but they accidently broke the API. Since we had no test suite and the other developer thought the API worked since his manual tests passed we merged the code in but soon realized some of the core functionality was broken. Our main goal when developing this website was to implement core functionality as fast as possible because the marketing team already had interested organizations waiting for the website. Thus, we didn't spend time on implementing a CICD pipeline. I go into more detail on why a proper CICD pipeline with tests is important so if you are interested check out [my post here](http://ahadsagheer.me/2020/07/06/CICD.html).

We also ran into issues integrating Facebook and Google login APIs and resorted to having users log in using MongoDB's provided login service. Since MongoDB Realm isn't too popular there wasn't a lot of documentation or Stack Overflow posts online. After around two weeks of development we had the backend complete written with Javascript on serverless functions storing all its data on a NoSQL database. We wrote the frontend using React which was straight forward.

#### Getting Noticed

Not everyone on the team was a software engineer so during our development they played a key role in marketing the website and getting beta users.

![](/assets/img/StayNeighbor1.png)

![](/assets/img/StayNeighbor2.png)

![](/assets/img/StayNeighbor3.png)


Around April 2020 the website went live and was used in New Hanover County NC. Some of our teammates lived in that area and had connections so it was a natural spot to launch the website and get early feedback. A couple weeks later we had over 40 different organizations either using the website or promoting it!

#### Endgame

Once core development died down the engineers and I had a serious discussion of what the next steps would be for StayNeighbor.com. We all put in many hours after work and were completely burnt out which lead us to decide we couldn't support StayNeighbor for its entire life. If bugs were found or people wanted new features, who would implement them? At one point a representative from Google reached out and was interested in taking the website but non of us felt it would be best to hand over this free tool to a company that may or may not have its users best interest at heart. We shortly debated whether we should sell the website to anyone but when we started this website all of us went in knowing this was some form of charity so we didn't feel comfortable trying to sell it. After exploring more options, a teammate found a non-profit called Crisis Cleanup which was in the process of building a website exactly like ours!

Crisis Cleanup is a management platform that improves coordination and reduces duplication of efforts during times of crisis such as hurricanes or tornadoes. They are a registered non-profit with federal grants meaning they have salaried engineers who work fulltime. After getting in contact and speaking to their founder, it seemed like all the stars aligned. Crisis Cleanup was super interested in StayNeighbor and we felt comfortable handing over the website to them since they were a registered non-profit, had fulltime engineers, and had a proven track record of helping those in need (partners with over 1,000 organizations and have repaired over 80,000 households/businesses). After giving them the website some of our engineers helped familiarize them with the code and re-implement some of the logic in their tech stack (Django + AWS) but now the transaction is fully complete and Crisis Cleanup maintains and owns StayNeighbor.

#### Lessons Learned

1. CICD pipelines are very important. I talk about this in my [my post earlier](http://ahadsagheer.me/2020/07/06/CICD.html) but taking the time to build a CICD pipeline would have saved us hours in debugging bugs.

2. Choose the right tech stack. We chose MongoDB Realm as our cloud service since they were the cheapest but choosing something more tested such as AWS would have made StayNeighbor more robust and easier to develop.

3. Momentum plays a key role in how fast small teams move. Getting APIs out quickly, hearing that new organizations are interested, and seeing the app in the news were all big wins for us and after each win the dev team seemed to work even harder. In our case all of this happened in about a month so we were all feeling great but in a work environment a team's momentum can play an important role in their deliverables.

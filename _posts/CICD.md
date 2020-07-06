---
layout: post
title: Why Every Project Needs a CICD Pipeline
feature-img: "assets/img/sample_feature_img.png"
tags: [DevOps]
---

#### CICD Pipelines

In March 2020 when the nation was on lockdown due to covid19 a team of programmers, designers, entrepreneurs, and I created a non profit called [StayNeighbor](https://stayneighbor.com/). StayNeighbor is a website that allows anyone to donate/request meals, PPE, household supplies, and more. The idea was that it's hard to go shopping or get help when everyone is stuck in their homes and can't go out. While developing this website, our main concern was getting the website bug free, functional, and ready for production ASAP. Speed was a main concern because during development many organizations and certain government officials wanted to use the website in their community. As a result we didn't follow all the best practices when setting up the project and in an effort to save time we never had a real CICD (continuous integration continuous deployment) pipeline. Although this saved us a lot of time in the beginning of development, later on when the website was nearing complete we faced many issues that a CICD pipeline would have fixed.

#### What is a CICD pipeline?

Imagine you have a 1,000 lines of code for a website. Let's say you modify how the login portion of the website works and make a pull request on github. How do your teammates know the code works? Should they just believe it works because you manually tested it? Let's say your code got merged in, now what? How do you release it for the world to see? Do you need to ssh into some server and manually copy the files? Can you imagine how painful this would be if you were releasing new versions of your website daily? This is the issue we faced early on in StayNeighbor and as you can see it can cause many problems. The goal of a CICD pipeline is to take code stored in some repo and be able to deploy to production easily, quickly, and safely. The continuous integration part of CICD is the idea that testing of each code change should be done automatically and as early as possible. Continuous deployment is the notion that tested code can be pushed to production automatically and reliably. Most of the CICD pipelines I've made or seen follow these steps:
1. Developer works on code.
2. Developer tests code locally.
3. Developer makes a pull request on github.
4. Creating a pull request will trigger tests to run via jenkins.
5. When reviewing the pull request anyone can verify that the tests ran and succeeded. All tests must pass before code can get merged in.
6. Once pull request is merged the project gets deployed to a qa/dev environment automatically.
7. At any time code deployed in qa/dev can get deployed to production in an automated fashion.

![](assets/img/cicd.png)

#### Benefits of having a CICD pipeline:

**1. Speed**

Not having to worry about manual deployment or manual testing greatly increases the time spent on solving problems and coding solutions.


**2. Work in small iterations**

Writing code in small batches means its easier to trace down bugs. Luckily, it's easy to write code and test in small batches because the CICD pipeline will take care of the testing and deployment.

**3. Early bug detection**

Since everyone's code is being tested so often, the team can be confident that code being merged in works. If tests fail, the whole team has a clear idea of what's causing the issue and how to fix it.

**4. High quality product**

Having most of deployment and testing process automated means developers can spend more time coding and making the product great.

**5. Happier team**

Manually deploying code to dev or prod is not fun, especially when you have to do it multiple times a day. Having a CICD pipeline handle it for you makes the entire process painful and even relaxing!

#### Caveats
Although a CICD may look simple, they are a bit complicated to implement. Not only will you need a full understanding of the project and a comprehensive test suite, you will also need to explain to your stakeholders the benefits of a CICD pipeline, why your project needs one, and estimate of how long it will take to develop it. If you want to learn more, I would recommend reading [Continuous Delivery](https://www.amazon.com/Continuous-Delivery-Deployment-Automation-Addison-Wesley/dp/0321601912).

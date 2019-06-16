---
layout: post
title: High Level Overview of Kubernetes
feature-img: "assets/img/sample_feature_img.png"
tags: [DevOps]
---

**How Kubernetes Plays a Role in Containerized Apps** 

Designed by Google in 2014, Kubernetes (also known as k8s) is a growing tool used by many companies to manage their containerized applications. If you aren’t familiar with containerized application, it’s essentially a way to launch and deploy an app without launching an entire virtual machine. This means containerized apps re light weight and require less cpu and memory to run. Docker is the most popular technology engineers use to containerize their apps. Before continuing on with this post, make sure you fully understand what Docker is (plus, it’s pretty cool). When Docker was growing in popularity engineers quickly discovered a problem - there was no way to easily manage a large amount of docker containers. If I’m just running a simple containerized api I can easily manage and deploy it. However, what if I’m running hundreds of different apis in hundreds of different containers. Now, it’s almost impossible to individually manage them but luckily this is where k8s comes in. 

K8s allows engineers to manage various aspects of containerized application from their computing power to their storage resources. We’re not going to get into the nitty gritty details of how k8s works, but here’s the general gist of how it works: 
K8s connects with some sort of cluster of machines such as AWS EC2 instances.
1. A controller plane is created between  between the machines and the containerized applications.
2. Users can schedule workloads on the machine cluster via an API server on the controller plane. The controller plane also includes a controller manager that can create, update, and delete resources. 
3. The workloads themselves live inside Nodes. These Nodes hold the state for the workload and all containers in that Node. 
4. Within each Node are one or more Pods where containerized applications live. 

Once you have everything setup with k8s, it will handle much of the tedious tasks of managing containerized apps such load balancing, scaling, and quick deployments. Because it allows teams to move faster while being cost efficient, k8s is quickly gaining in popularity and may soon become the industry standard in cloud computing. 

By this point, you should have a general idea of how k8s works and utility it brings but don’t be discouraged if you aren’t an expert at it. There are multiple different technologies which go into k8s such as Dockker, YAML, Jenkins, AWS, etc. so it will take a couple months of continuous use to really become a Kubernetes pro.  


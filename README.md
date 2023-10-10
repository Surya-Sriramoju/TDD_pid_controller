# Week 5: Test-Driven Development Assignment - ENPM 808X

## Overview

This repository pertains to the test driven development exercise. The group members of which are :

- Sai Surya Sriramoju
- Krishna Rajesh Hundekari
- Shivam Sehgal
- Abrarudiin Syed

# C++ Boilerplate v2 Badges
![CICD Workflow status](https://github.com/Surya-Sriramoju/TDD_pid_controller/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/Surya-Sriramoju/TDD_pid_controller/branch/main/graph/badge.svg)](https://codecov.io/gh/Surya-Sriramoju/TDD_pid_controller) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Part 1 
The members of the pair for Part 1 of this repository are :
 - Sai Surya Sriramoju (Driver)
 - Krishna Rajesh Hundekari (Navigator)

 ## Part 2 
The members of the pair for Part 2 of this repository are :
 - Abrarudiin Syed (Navigator)
 - Shivam sehgal (Driver)
 
## Description
The design contains one class, PID. The main function takes the current and goal state as input to pid class which should be initialized with kp, ki, kd and dt values.


The UML class diagram is as follows : 

Fig 1 : UML class diagram 
<img alt="UML" src="UMLDiagrams/class_diagram.png" width="400" /> 


Fig 2 : Activity diagram 
<img alt="Activity" src="UMLDiagrams/activity_diagram.png" width="400" /> 


### Steps to build cd pid-controller/
 mkdir build
 cd build
 cmake ..
 make 
### Steps to run ./app/shell-app### Steps to unit tests ./test/cpp-test ### Steps to code coverage sudo apt-get install lcov
 cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
 make
 make code_coverage

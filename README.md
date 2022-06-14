# This README will be updated throughout the project
# DS_MP_redundant_vehicle_control
This repository is used to store all the documentation including code for the minor project for a Redundant Vehicle Control in Distributed Systems - group 2

## Disclaimer
This Redundant Vehicle Controller is based on the repository from pineapplezex:
https://github.com/pineapplezex/HANCoder_TTA

## Goal
The goal of this project is to improve the existing Triple Modular Redundant (TMR) function. His TMR implimentation included 3 board with 2 roles, master and slave. Based on timings the roles switched between the boards.

## Contents
* [Setup of System](#Setup of System)
* [Configuration](#Configuration)
* [Features Added](#Features Added)
* [Definition of Roles](#Definition of Roles)

## Setup of System
Here will be explained how the system is ran.
Follow the instructions from ....

## Configuration
During build simulink will require various constants, these can be set in

## Introduction to System

### Features Added
- To improve the redundancy of the system a 4th board has been added to the system and 4 roles were defined. The roles are as following, master, value voter, slave, backup.
- Decision voter has been expanded to assign 4 roles instead of 2
- Membership function that switches roles based on faults
- Switching logic between decision voter and membership

### Definition of Roles
- Master: The master contains the following functions, time synchronization, decision voter and membership.
- Value Voter: The value voter role does everything the same as an slave but has the additional function of choosing the correct value.
- Slave: A slave only executes the basic functions that are difined which are in the matrix cycle, such as calculations and own decision vote
- Back Up: In the backup role the board visits ground state during calculations and value voting. It participates during decision voting and synchronizing with the time with the master.

### Matrix Cycle with its Basic Cycles
The matrix cycle changes based on the roles that are assigned to the boards. This system is an dynamic scheduler.

## Overview Added Features

### Dynamic Scheduler
Based on roles things happen or do not happen in the matrix cycle.

### Expanded Decision Voter
The basis of the  decision voter from Diego was kept and expanded upon. The original only assigned 2 roles, master and slave, based on timings trough a majority vote. Because the system has to work with 4 roles, 2 were added. The majority vote was kept but to prevent unnecesary switching between value voter and slave a extra system was added.

### Membership
Is only enabled when a fault occurs. This membership can only repair .... (temporary?) faults.

### Switching Logic Between Role Assignment

## Overview Matrix Cycle
With the added features to the system and functions of each role known the matrix cycle is given.

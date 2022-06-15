# DS_MP_redundant_vehicle_control
![Logo](https://github.com/nis1902/DS_MP_redundant_vehicle_control/blob/master/Figures/Logo.png)
This repository is used to store all the documentation including code for the minor project for a Redundant Vehicle Control in Distributed Systems - group 2.
Here, a quick overview of the system will be given. More detailed data can be found on the [Wiki](https://github.com/nis1902/DS_MP_redundant_vehicle_control/wiki) page.

## Participants
- Bram Diepenbrock
- Natalia Staniszewska
- Basavaprabhu Mundas
- Cheffry Bislik
- Mohammed Azeez Ur Rahman

## Disclaimer
This Redundant Vehicle Controller is based on the repository from pineapplezex:
https://github.com/pineapplezex/HANCoder_TTA

## Goal
The goal of this project was to implement a system with incorporated high availability, TMR, membership service and fault detection.
## Contents
* [Setup of System](#Setup-of-System)
* [Configuration](#Configuration)
* [Features Added](#Features-Added)
* [Definition of Roles](#Definition-of-Roles)

## Setup of System
In this section the setup of the system will be shown which consists of:

<ul style=“list-style-type:square”>
<li>Hardware setup</li>
<li>Simulink Model</li>
<li>HANtune template</li>
</ul>

First the hardware setup will be given. In Figure below, the electric scheme is presented for highly available controller system (4 boards), input generator and vehicle emulator that consists. All the boards are connected with each other via CAN transcievers.

![Electric scheme of TTA controller](https://github.com/nis1902/DS_MP_redundant_vehicle_control/blob/master/Figures/boards.svg)

The software files of the controller system can be found in [target folder](https://github.com/nis1902/DS_MP_redundant_vehicle_control/tree/master/HANcoder-STM32-Target-v1.0/Target). Hereby, following files are important:
<ul style=“list-style-type:square”>
<li><i>HANcoder_E407_TTA_Group2.slx</i>: Simulink model containing the TTA template which was adapted in our project for creating a controller</li>
<li><i>HANcoder_E407_TTA_Group2_startup.m</i>: startup file which is executed when the Simulink file associated to it is executed. It
contains information about constants, parameters and type definitions </li>
<li><i>HANcoder_E407_TTA_Group2.a2l</i>: After each build of the Simulink model an .a2l file will be created. This can be then used in HANtune in order to observe the signals and messages</li>
</ul>

The last part of the setup is the HANtune template (<i>DS_TTA_Monitor (1).hml</i>) which can be found in [HANtune_build_6](https://github.com/nis1902/DS_MP_redundant_vehicle_control/tree/master/HANtune_build_6) folder. This file contains several windows for checking the communication and overall testting of the system.

## Configuration
At the moment the system is setup the way that only board IDs from 1 to 6 are allowed (see also the hardware setup). Therefore, before builiding the software the user must ensure the correct wiring (on connector CON3 on the STM32-E407). 

Additionally, if the user wants to observe the state of each board in HANtune, a HANtune window should be opened for each of them.

## Introduction to System
A short introduction is given, the wiki of this repository provides more detail.
Following a short introduction to the features added in the system will be described. For more detail go to [Wiki](https://github.com/nis1902/DS_MP_redundant_vehicle_control/wiki) page
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
In the wiki the added features are described in more detail, here a short overview is given.

### Dynamic Scheduler
Based on roles things happen or do not happen in the matrix cycle. As specified in definition of roles each role has its own function. When a certain role is executing a function other roles are idling and visiting groundstate. The benefit is that different roles can still have a similar matrix cycle, what lessens the complexity and time required to code.

### Expanded Decision Voter
The basis of the  decision voter from Diego was kept and expanded upon. The original only assigned 2 roles, master and slave, based on timings trough a majority vote. Because the system has to work with 4 roles, 2 were added. The majority vote was kept but to prevent unnecesary switching between value voter and slave a extra system was added.

### Membership
Is only enabled when a fault occurs. This membership can only repair temporal failures and not severe failures. By severe failures is meant, physical disconnections or permanent failure of a board. The membership fixes a temporal failure of a certain board with corresponding role by setting it to the backup role.

### Switching Logic Between Role Assignment
The switching logic is part of the dynamic scheduler but it ties in with the error log generated by the TMR system. It uses the error log to decide when to enable the Decision Voter or Memebership Function for the master.

:shipit: :shipit: :shipit:
## Verification
Following aspects of the system were tested: :shipit:


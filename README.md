# This README will be updated throughout the project
# DS_MP_redundant_vehicle_control
This repository is used to store all the documentation including code for the minor project for a Redundant Vehicle Control in Distributed Systems - group 2

This Redundant Vehicle Controller is based on the repository from pineapplezex:
https://github.com/pineapplezex/HANCoder_TTA

The goal of this project is to improve the existing Triple Modular Redundant (TMR) function. His TMR implimentation included 3 board with 2 roles, master and slave. Based on timings the roles switched between the boards.

To improve the redundancy of the system a 4th board has been added to the system and 4 roles were defined. The roles are as following, master, value voter, slave, backup.

The master contains the following functions, time synchronization, decision voter and membership.
The value voter role does everything the same as an slave but has the additional function of choosing the correct value.
A slave only executes the basic functions that are difined which are in the matrix cycle, such as calculations and own decision vote
In the backup role the board visits ground state during calculations and value voting. It participates during decision voting and synchronizing with the time with the master.

The matrix cycle changes based on the roles that are assigned to the boards. This system is an dynamic scheduler.

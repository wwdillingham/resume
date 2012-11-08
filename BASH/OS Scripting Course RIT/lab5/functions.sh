#!/bin/bash
#This is the script containing the shared functions, each function will be called by the manager
#$1 is the name of the script which is to be acted on $2 is the PID

Start ()
{
	sh $1&
}

Terminate ()
{
	 
	kill $2

}

#Restart is simply, first running Terminate and the running Start
#in the manager, the -r flag first calls the terminate function and then the start

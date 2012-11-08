#!/bin/bash

DirExists ()
{
	if [ -d $1 ] ; then
		return 0
	else
		return 200
	fi
}


if DirExists $1 ; then
	(cd $1; pwd; ls | more)
else
	echo "$1 is not a directory"
fi

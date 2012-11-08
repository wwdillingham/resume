#!/bin/bash

awk '
BEGIN{
	split("abcd, arr, "");
	print "arr[0]="arr[0];
 	print "arr[1]="arr[1];
	print "arr[2]="arr[2];
}
{}
'

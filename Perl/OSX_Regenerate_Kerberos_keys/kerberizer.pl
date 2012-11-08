#!/usr/bin/perl -w 
#Author: Wesley Dillingham
#For: Savant Systems LLC




use strict;


print"This script will remove kerberos keys, regenerate them, then delete itselfand reboot the computer press ctrl+c now to abort";

system("sleep 10");


#procedure


#Step1 - remove kerberos certificates in keychain access


#step 2 - remove directory /var/db/krb5kdc
system("sudo rm -rf /var/db/krb5kdc");

#step 3 run program /usr/libexec/ConfigureLocalKDC to recreate keys
system("sudo /usr/libexec/ConfigureLocalKDC");


#step 4: script self deletes itself.
if ( -e "./kerberizer.pl" and -f "./kerberizer.pl")
{
	system("sudo rm -rf ./kerberizer.pl");
} 

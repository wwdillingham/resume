#!/usr/bin/perl -w
#use strict;
#Author: Wesley Dillingham for Savant Systems LLC.
#Last updated 1/21/2011
#
#
#
##############################
#This script is meant to be run on the mysql slave in a master slave replication setup.
# This script will be autoexecuted upon the slave assuming
# the IP Address of the master. This process is automated if
# IP failover is setup properly. It is therefore important that
# thisscript be placed  in the appropriate place in the
# filesystem (a folder in which all scripts are autoexecuted at the point of IP FAILOVER).
# in OS X server this directory is. /Library/IPFailover/<ip address>
# It is also imporant that the name of this script begin with PostAcq
# So, PostAcq_descriptive.sh would suffice
#The script will be executed on the slave Post Aquisition of master IP.
###################################



# PERL MODULES WE WILL BE USING
use Mysql;
use lib;
#use DBD::mysql;
use DBI;
use Net::SMTP;
use Net::MySQL

# MySQL CONFIG VARIABLES
$dbhost = "slave.sandbox.com";
#$database = "store";
#$tablename = "inventory";
$user = "root";
$pw = "FILLINLATER";


#$db = Mysql->connect($host, $database, $user, $pw);

#CONNECT TO DATABASE AND CHANGE SLAVE TO MASTER
my $dbh = DBI->connect("dbi:mysql:database=mysql;host=$dbhost", $user, $pw) or die "$DBI::errstr";
$dbh->do('STOP SLAVE');
print "Slave Stopped\n";
$dbh->do('RESET MASTER');
print "Slave has been promoted to master\n";
print "Attempting to show new Master status.....";
system(sleep 2);
$dbh->do('SHOW MASTER STATUS');




$status=$dbh->do('SHOW MASTER STATUS');

my $smtp = Net::SMTP->new("mail.886ventures.com");

#@recipients=("wesley.dillingham\@savantav.com", "wwdillingham\@gmail.com");

my $hostname=`hostname`;
my $ipinfo=`ifconfig`;


$smtp->mail("no_reply\@slave.sandbox.com");
$smtp->to("wesley.dillingham\@savantav.com", "wwdillingham\@gmail.com");
$smtp->data();
$smtp->datasend("IP Failover event on $hostname\n The current IP information is as follows:\n\n $ipinfo \n\n The current status of the new master is $status\n\n");
$smtp->dataend();
#$smtp->end();                                                                                                             



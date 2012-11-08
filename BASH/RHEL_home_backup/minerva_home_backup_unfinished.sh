#!/bin/bash
#Author: Wesley Dillingham 
#UTLN: wdilli01
#Email wdilli01@asunix.tufts.edu
#Purpose: To provide weekly backups of the /home directory of minerva to an external hard disk. Ideally as many backups as possible should be kept (storage allowing).#Currently the method is for 5 backups with the least recent being deleted. This script is going to make a tar archive of /home and place it on the external drive.

#assuming drive is automounting to a persistent location on filesystem, will have to determine if this is the actual case, but proceeding with that assumption

ROOTOFTARGET="/test"
TARGETDIR="/test/dir"

##Checking to see that hard drive is mounted on the filesystem

echo "Checking for External Hard Drive"
sleep 2
if [[ -d "${ROOTOFTARGET}" && ! -L "${ROOTOFTARGET}" ]]; then
	echo "External Hard drive is mounted to $ROOTOFTARGET"
	sleep 2
	echo "Proceeding to check for backup folder"
	sleep 2
else
	echo "Target directory does not exist please make sure that the external hard disk is turned on and mounted to $TARGETDIR"
	#need to end script here
fi


##Checking to see that backup directory on external hard disk exists
if [[ -d "${TARGETDIR}" && ! -L "${TARGETDIR}" && -w "${TARGETDIR}" ]] ; then
	cd $TARGETDIR
	echo "Backup Directory $TARGETDIR exists and is able to be written to. Proceeding with backup"
	sleep 2
else
	echo "Backup directory: $TARGETDIR cannot be found or is unable to be written to"
	#NEED TO END SCRIPT HERE
fi

##Present the current backup scenario (count the number of tar files and produce the time of the oldest and youngest backups)
NUMBACKUPS=`ls $TARGETDIR | grep .tar | wc -l`
echo "Currently the backup directory contains $NUMBACKUPS backups"
sleep 2
MOSTRECENT=`ls -t1 $TARGETDIR | grep .tar | head -n1`
echo "The most recent backup is: $MOSTRECENT modified on: `stat $MOSTRECENT | grep -i modify | cut -d " " -f 2,3`" 
sleep 2
OLDESTBACKUP=`ls -t1 $TARGETDIR | grep .tar | tail -n1` 
echo "The oldest backup is: $OLDESTBACKUP modified on: `stat $OLDESTBACKUP | grep -i modify | cut -d " " -f 2,3`"
sleep 2


##Determine if there is enough free space on the drive to make a backup 
SIZEOFHOME=`du -s /home | cut -f1`
echo "Current size in Kilobytes of /home is $SIZEOFHOME"
#determine free space on $ROOTOFTARGET



##Create the backup of /home as a .tar archive and place it in the target directory
##Give operator the option of deleting the oldest backup


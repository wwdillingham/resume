#Wesley Dillingham
#For Savant Systems LLC
#! /bin/bash

#determine the name of the old machine
oldcomputername=`awk '/ComputerName/ {{{getline} print substr($0,12,length($0)-20)} exit}' /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist`
echo "Old Computer name is $oldcomputername"


#join multicast session here - multicast session initates
asr restore --source asr://10.5.218.4 --target /Volumes/Macintosh\ HD --erase --noverify --noprompt


index=0
oldmac=false
############################################################
## Set the ByHost preferences to the machine being imaged ##
############################################################

#Get hardware address of the machine
hwAddress=`ifconfig en0 | awk '/ether/ { gsub(":",""); print $2 }'`
echo "The local hardware address is:" $hwAddress

#Get the UUID of the machine
LUUID=`ioreg -rdl -c IOPlatformExpertDevice | awk '/IOPlatformUUID/ { print $4 }' | sed "s:\"::g"`
echo "The UUID for this computer is:" $LUUID

hwAddressUPPER=`echo $hwAddress | tr a-z A-Z`
echo "hwAddressUPPER="$hwAddressUPPER
LUUIDmerge="00000000-0000-1000-8000-"$hwAddressUPPER

echo "LUUIDmerge="$LUUIDmerge

if [ $LUUID == $LUUIDmerge ] ; then
   oldmac=true
fi

echo "oldmac=" $oldmac

#Get list of volumes currently mounted
#The last sed command replaces ' ' with '/' so that entry can be manipulated as one object
mountedvolumes=`ls -d /Volumes/* |  sed "s:/Volumes/::" | sed "s:.*:\"&\":" | sed "s: :/:g"`




#Put volumes into an array with proper text encoding
#for volume in $mountedvolumes
#do
	#volume=`echo $volume | sed "s:/:\\ :g" | sed "s:\"::g"`
	volume="Macintosh HD"
	volumes[0]=$volume
	#let "index = $index + 1"
#done

#index=0
volumecount=${#volumes[@]}
#printf "\n\nThese are the currently mounted volumes:\n"
#printf "Number \t\t Name\n"
#while [ "$index" -lt "$volumecount" ]
#do
#	printf "$index \t\t ${volumes[$index]}\n"
#	let "index = $index + 1"
#done
#echo -n "Enter the number of the disk you would like to modify the ByHost preferences:> "
#read volumenumber
volumenumber=0
if [ $volumenumber -lt $volumecount ] ; then
	echo ${volumes[$volumenumber]}
	userdirs=`ls -d /Volumes/"${volumes[$volumenumber]}"/Users/* | sed "s:/Volumes/${volumes[$volumenumber]}/Users/::g" | sed "s: :/:g"`
	userindex=0
	for user in $userdirs
	do
		user=`echo $user | sed "s:/:\\ :g"`
		users[$userindex]=$user
		let "userindex = $userindex + 1"
	done
	
	usercount=${#users[@]}
	userindex=0
	echo ${users[@]}
	while [ "$userindex" -lt "$usercount" ]
	do
		echo Working in ${users[$userindex]}
		if [ -e /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost ] ; then
			byhostlist=`ls -A /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/ | sed "s: :/:g"`
			byhostindex=0
			for byhostitem in $byhostlist
			do
				byhostitem=`echo $byhostitem | sed "s:/:\\ :g"`
				byhostitems[$byhostindex]=$byhostitem
				let "byhostindex = $byhostindex + 1"
			done
			
			byhostcount=${#byhostitems[@]}
			byhostindex=0
		#	while [ "$byhostindex" -lt "$byhostcount" ]
			for (( byhostindex=0; byhostindex<${#byhostitems[@]}; byhostindex++)) 
			do
				temphw=`echo ${byhostitems[$byhostindex]} | awk -F. ' { print $(split($0, temp, ".")-1); }'`
				if [ $oldmac == "true" ] ; then
				    modified=`echo ${byhostitems[$byhostindex]} | sed "s/$temphw/$hwAddress/g"`
				else
				    modified=`echo ${byhostitems[$byhostindex]} | sed "s/$temphw/$LUUID/g"`
				fi

				echo This is the item /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"${byhostitems[$byhostindex]}" being modified to /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$modified"
				if [ ! -e /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$modified" ]; then
#					echo Copying /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"${byhostitems[$byhostindex]}" to /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$LUUIDModified"
#					`cp -p /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"${byhostitems[$byhostindex]}" /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$LUUIDModified"`
					echo Moving /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"${byhostitems[$byhostindex]}" to /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$modified"
					`mv /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"${byhostitems[$byhostindex]}" /Volumes/"${volumes[$volumenumber]}"/Users/"${users[$userindex]}"/Library/Preferences/ByHost/"$modified"`
				fi
				#let "byhostindex = $byhostindex + 1"
#				byhostitems=(${byhostitems[@]:0:$byhostindex} ${byhostitems[@]:$(($byhostindex+1))})
      			done
			byhostitems=(${byhostitems[@]:0:0})

		fi		
		let "userindex = $userindex + 1"		
	done	

fi

#get the name of the computer from the freshly restored image (so we can find and replace with the old name)
currentcomputername=`awk '/ComputerName/ {{{getline} print substr($0,12,length($0)-20)} exit}' /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist`

echo "Computer name after reimage is $currentcomputername"
echo "Computer name will be changed from $currentcomputername to $oldcomputername"



#replace currentname with oldname
sed -e "s/$currentcomputername/$oldcomputername/g" /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist  > /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist2
mv -f /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist2 /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist

finalname=`awk '/ComputerName/ {{{getline} print substr($0,12,length($0)-20)} exit}' /Volumes/Macintosh\ HD/Library/Preferences/SystemConfiguration/preferences.plist`
echo "Old Computer name is $oldcomputername"

echo "Computer name sucessfully changed to: $finalname"
sleep 3
echo "Computer is going down for reboot in sixty seconds to cancel this process. Hit Ctrl+C"
echo "It is recommended you allow the reboot as this will complete the reimaging process"
sleep 20
echo "rebooting in 40 seconds"
sleep 20
echo "rebooting in 20 seconds"
sleep 15
echo "rebooting in 5"
sleep 1
echo "rebooting in 4"
sleep 1
echo "rebotting in 3"
sleep 1
echo "rebooting in 2"
sleep 1
echo "rebooting in 1"
sleep 1
echo "System is now rebooting"
sleep 2

reboot

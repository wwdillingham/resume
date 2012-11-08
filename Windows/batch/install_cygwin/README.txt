README for Cluster Installation Script.
Cygwin FAQ: http://cygwin.com/faq/
Tufts Cluster INFO: https://wikis.uit.tufts.edu/confluence/display/TuftsUITResearchComputing/Home
Direct any questions / concerns to staff@asunix.tufts.edu

*******************
*USING THIS SCRIPT*
*******************
To download and setup Cygwin for usage with the cluster, make sure you do not have a current cygwin install, if you do see the "Removing Cygwin" Section below. Before attempting the reinstall.

Right Click the .zip folder (Install_Cygwin.zip) and select "Extract all". The Windows Extractor wizard will display and ask you where to extract, leave the default location, and click "Extract" This will bring open a new Windows Explorer with a file called "Install_Cygwin and folder called "support_files" double click the "Install_Cygwin" File. this will launch the installer script. Click "Yes" When asked if you want the program to make changes to this computer. Back on the terminal window, the installer will ask you to "Press any key to continue" press a key, and hit "Yes" when asked again about making changes to the computer. The install process has now begun, and will take approx 20 minutes. After which you can remove the installer script folder and .zip if you so desire. It is recommended you leave the setup.exe file in C:\Users\Public in case you want to add packages at a later date.



*******************
*About this Script*
*******************
This Script is intended for usage by members of the Tufts University Community. Specifically those who would like to utilize the Compute Cluster and forward the remote X11 data from the cluster. This script will call a .vbs script in the subdir "support_files" to download the cygwin installer (setup.exe) in c/users/public/setup.exe. Then back in the .bat script, it will execute that script with various install options. It will download additional packages needed for utilization of the cluster.

Here are those packages: xlogo,xinit,joe,vim,inetutils,openssh,emacs


*****************
*REMOVING CYGWIN*
*****************
There is no automatic Cygwin uninstaller

Delete the Cygwin root folder and all subfolders. (Typically C:/Cygwin)If you get an error that an object is in use, then ensure that you've stopped all services and closed all Cygwin programs. If you get a 'Permission Denied' error then you will need to modify the permissions and/or ownership of the files or folders that are causing the error. For example, sometimes files used by system services end up owned by the SYSTEM account and not writable by regular users.

The quickest way to delete the entire tree if you run into this problem is to change the ownership of all files and folders to your account. To do this in Windows Explorer, right click on the root Cygwin folder, choose Properties, then the Security tab. If you are using Windows XP Home or Simple File Sharing, you will need to boot into Safe Mode to access the Security tab. Select Advanced, then go to the Owner tab and make sure your account is listed as the owner. Select the 'Replace owner on subcontainers and objects' checkbox and press Ok. After Explorer applies the changes you should be able to delete the entire tree in one operation. Note that you can also achieve this in Cygwin by typing chown -R user / or by using other tools such as CACLS.EXE.

Delete the Cygwin shortcuts on the Desktop and Start Menu, and anything left by setup.exe in the download directory. However, if you plan to reinstall Cygwin it's a good idea to keep your setup.exe download directory since you can reinstall the packages left in its cache without redownloading them.


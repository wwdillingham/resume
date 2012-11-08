#Author Wesley Dillingham (wdilli01@asunix.tufts.edu)
#For: Tufts University
#Description: This Powershell script downloads and installs cygwins setup.exe latest from cygwin.com and then command line installs it with
#             the appropriate packages to connect to the cluster and render forwarded x11 data (openssh, xinit, joe, vim, inetutils, xlogo) 


#$greeting = "Hello" 
#$name = read-host "What is your name?" 
#write-host "$greeting, $name!"
Set-ExecutionPolicy Unrestricted
write-host "This Script is going to download and install cygwin onto your computer, please contact staff@asunix.tufts.edu with any questions."
write-host "Proceeding with Download"
$source = "http://cygwin.com/setup.exe"
#$destination = "$pwd\setup.exe"
$destination = "C:\Users\Public\setup.exe"
$wc = New-Object System.Net.WebClient
$wc.DownloadFile($source, $destination)
#read-host "Please wait 10 seconds"
write-host "Download complete proceeding with installation"
cmd.exe /c "C:\Users\Public\setup.exe -q -R c:\cygwin -s http://mirrors.xmission.com/cygwin -l c:\localPackageDir -P xlogo,xinit,joe,vim,inetutils,openssh,emacs" 

@ECHO off
REM AUTHOR:Wesley Dillingham
REM For Tufts University
REM Description: This script should be run first the other script/s/ are called from this script, it coordinates The output to user. It downloads cygwin latest and installs it with the required packages for connecting to the cluster.

ECHO This script is going to download and install the latest version of Cygwin to this computer. If that is not what you want exit now. 
ECHO.
ECHO Contact staff@asunix.tufts.edu with any issues.
ECHO.
ECHO Now Downloading the .exe to C:/Users/Public/setup.exe
ECHO.
ECHO Please click yes for elevated privileges.
cscript.exe support_files/download_cygwin.vbs
ECHO The installer has now downloaded to C:\Users\Public 
ECHO.
ECHO Cygwin will be installed to C:\cygwin 
ECHO.
ECHO To complete the Installation please
PAUSE
start c:/Users/Public/setup.exe -q -R c:\cygwin -s http://mirrors.xmission.com/cygwin -l c:\localPackageDir -P xlogo,xinit,joe,vim,inetutils,openssh,emacs

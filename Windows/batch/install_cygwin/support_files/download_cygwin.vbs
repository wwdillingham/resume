'Author:Wesley Dillingham wdilli01@asunix.tufts.edu
'For: Tufts University
'Description:
'This little vbscript downloads setup.exe,cygwins latest installer from cygwins website and saves it to C:\setup.exe requires elevation

If WScript.Arguments.Named.Exists("elevated") = False Then

	'Launch the script again as administrator

	CreateObject("Shell.Application").ShellExecute "wscript.exe", """" & WScript.ScriptFullName & """ /elevated", "", "runas", 1

	WScript.Quit

Else

	'Change the working directory from the system32 folder back to the script's folder.

	Set oShell = CreateObject("WScript.Shell")

	oShell.CurrentDirectory = CreateObject("Scripting.FileSystemObject").GetParentFolderName(WScript.ScriptFullName)

	'#MsgBox "Now running with elevated permissions"

End If

' Set your settings
    strFileURL = "http://cygwin.com/setup.exe"
    strHDLocation = "c:\Users\Public\setup.exe"

' Fetch the file
    Set objXMLHTTP = CreateObject("MSXML2.XMLHTTP")

    objXMLHTTP.open "GET", strFileURL, false
    objXMLHTTP.send()

If objXMLHTTP.Status = 200 Then
Set objADOStream = CreateObject("ADODB.Stream")
objADOStream.Open
objADOStream.Type = 1 'adTypeBinary

objADOStream.Write objXMLHTTP.ResponseBody
objADOStream.Position = 0    'Set the stream position to the start

Set objFSO = Createobject("Scripting.FileSystemObject")
If objFSO.Fileexists(strHDLocation) Then objFSO.DeleteFile strHDLocation
Set objFSO = Nothing

objADOStream.SaveToFile strHDLocation
objADOStream.Close
Set objADOStream = Nothing
End if

Set objXMLHTTP = Nothing
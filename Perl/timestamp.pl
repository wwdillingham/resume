#!/usr/bin/perl -w
use strict;

($#ARGV==0) or die "Please enter one and only one argument\n";
 
	open FILE, "/etc/passwd" or die "Cannot open the file\n";
my $path = "use does not exist";
while (my $line = <FILE>)
{
	 my $user_end=index $line, ":";
	 my $username=substr $line, 0, $user_end;
	# print "$username\n";	
	 my $path_end= rindex $line, ":";
	my $path_start=rindex $line, ":", $path_end-1;
        $path=substr $line, $path_start+1, $path_end-$path_start-1 if ($username eq $ARGV[0]);
}


opendir DIR, "$path";
my @values=readdir(DIR);
closedir DIR;

print "Time files were last opened:\n";
system("ls -l --time=atime $path");
print "Time files were last modified:\n";
system("ls -l $path");
print "Time files were last changed:\n";
system("ls -l --time=ctime $path");



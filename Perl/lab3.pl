#!/usr/bin/perl -w
#Wesley Dillingham
use strict;
my $directory=$ARGV[0];
my $sum;
my @dir;
my $file;
my $temp;
my @fileinfo;

if ((-d $directory) and (-r $directory))
{
	sub dirsize
	{
	opendir D, $directory;
	 $sum = 0;
	 @dir = readdir DH;
	closedir DH;
	foreach $file(@dir)
	{
		if(-d "$file(@dir)")
			&dirsize($file(@dir));
		else
		{
			 @fileinfo = stat "$file"; 
			 $temp = stat $fileinfo[7];
			 $sum += $temp;
		}
	
			print "$sum total bytes in this directory\n";
	}
	}
}
else
{
	print STDERR "Enter a readable directory\n";
}

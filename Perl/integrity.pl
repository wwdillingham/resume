#!/usr/bin/perl
#Wesley Dillingham
#Filename: integrity.pl
#Perl for SysAdmin
use strict;
use warnings;
($#ARGV+1==2) or die "Please enter two and only two arguments you wanker\n";
(-d $ARGV[0]) or die "The first Argument must be an existing directory you wanker\n";

if (! -f $ARGV[1]) #create digest file if non existent
{
	system("touch $ARGV[0]");
}
sub traverser
{
	opendir(DIR, $_[0];
	my $dir = $dir $_[0];
	my @lines=readdir(DIR);
	closedir(DIR);

	foreach my $file (@line)
	{
		if (-f $file and $file ne ".." and $file ne ".")
		{
			#hash the file here and add it to the digest.
		}
	}
}
















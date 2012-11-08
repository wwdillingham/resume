#!/usr/bin/perl 
#Wesley Dillingham
#Perl for System Administration
#Fall 2009
#
#Filename: lab2.pl

use strict;
use warnings;

my %usernames;

if (!(-f $ARGV[0]) or ($#ARGV != 0))
{
	print "That File Doesn't exist or too many arguments\n";
}
else
{
	print "success\n";

	#$str=<IN>;
	#use strict;
	#open(IN, "$ARGV[0]") or
	#die("Cannot open file\n");
	
	#my $line;
	#while ( $line = <IN> )
	#{
	#	chomp($line);
	#	print "$line\n";
	#}
	
	my $UID=101;
	open FILE, $ARGV[0] or die "Cannot open file.txt";
	while(my $line=<FILE>)
	{
		chomp($line);
		#$line = lc $line;
		
		my $soc_start=index $line, "/";
		my $soc_end=index $line, "/", $soc_start+1;
		my $ssn=substr $line, $soc_start+1, $soc_end-$soc_start-1;
		my $first_dash=index $ssn, "-";
		my $second_dash=index $ssn, "-", $first_dash+1;
		if ( (length $ssn != 11) or ($first_dash != 3) or ($second_dash != 6)) #Checks for valid ssn
		{
			print STDERR "Bad Soc: $ssn\n";
		}
		else
		{
			#isolate names, save them to strings, use spaces and slashes as anchor points, work from there.
			my $first_space=index $line, " ";
			my $second_space=index $line, " ", $first_space+1;
			my $first_name=substr $line, 0, $first_space;
			my $mid_name=substr $line, $first_space+1, $second_space-$first_space-1;
			my $last_name=substr $line, $second_space+1, $soc_start-$second_space-1;
			my $username;

			#determine password
			#my $passwd = <STDIN>; chomp $passwd;

			my $first_init=lc substr $first_name,0,1; 
			my $mid_init=lc substr $mid_name,0,1; 
			my $last_init=lc substr $last_name,0,1; 
			my $last_four=substr $ssn,7;

			#student or faculty, alter values accordingly
			my  $group=substr $line, $soc_end+1,1;
			my $PUID;
			my $GID;
			my $shell;
			my $path;

	
			if ($group eq "s")
			{
				 $username = $first_init . $mid_init . $last_init . $last_four;
				 $PUID = $UID;
				#$UID++;
				$shell = "/bin/bash";
				$GID="505";
				$path= "/home/student/" . $username;
			}
			else
			{
				 $username = $first_init . $mid_init . $last_init;			
				 $PUID = $UID;
				# $UID++;
				$shell="/bin/tcsh";
				$GID="1010";
				$path= "/home/faculty/" . $username;
			}
			
			
			#ouput
		
			if ( !(exists ($usernames { $username } ) ) )
			{	
				my $passwd=<STDIN>; chomp $passwd;
				print  $username . ":" . $passwd . ":" . $PUID . ":" . $GID . ":" . $first_name . " " . $mid_name . " " . $last_name . ":" . $path . ":" . $shell .  "\n";
				$UID++;
				$usernames{ $username }=0;
			}
			else
			{
				print STDERR "Duplicate Name: $username\n";
			}
			
		}

	}

}

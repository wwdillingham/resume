#!/usr/bin/perl
#Wesley Dillingham
#

$input=0;

while ($input ne "quit")
{

$input=<STDIN>; chomp $input;

push @integers, $input if ($input ne "quit");

}

print "array: ";
foreach (@integers)
{
	print "$_ ";
}
print "\n";

#$len=$#integers+1;

print "reverse 1: ";
@reversed=reverse(@integers);
foreach $integer (@reversed) 
{
	print "$integer ";
}
print "\n";
print "reverse 2:  ";

for ($i=$#integers;$i>=0 ; $i--)
{
	print "$integers[$i] ";

}
print "\n";

for ($j=1; $j<$#integers;$j+=2)
{
	push @odds, $integers[$j];
}

print "odd indices: ";
foreach $value (@odds)
{
	print "$value ";
}
print "\n";

print "sum is: ";
foreach (@integers)
{
	$sum+=$_;
}
print "$sum \n";

$modulo= $sum %  1024;

print "mod is: $modulo \n";

if ($modulo < 500)
{
	print "mod is less than 500\n"
}
elsif ($modulo >= 500 && $modulo < 1000)
{
	print "mod is between 500 (inclusive) and 1000 (exclusive)\n";
}
else 
{
	print "mod is a thousand or higher"
}


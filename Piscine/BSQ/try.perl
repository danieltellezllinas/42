#!/usr/bin/perl
use warnings;
use strict;
my $filename = './tablero.dict';
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
open(FH, '>', $filename);
print FH "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
    print FH "o";
}
else {
print FH "."; }
}
print FH "\n"; }
close (FH);
print "Writing to file successfully!\n";

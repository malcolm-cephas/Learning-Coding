#!/usr/bin/perl
use strict;
use warnings;

# Subroutine to print table of a number
sub print_table {
    my ($num) = @_;
    for my $i (1..10) {
        print "$num x $i = ", $num * $i, "\n";
    }
    print "\n";   
}

# Print tables from 1 to 10
for my $n (1..10) {
    print "Multiplication Table for $n:\n";
    print_table($n);
}
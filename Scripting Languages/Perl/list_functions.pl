#!/usr/bin/perl
use strict;
use warnings;

# Initial list
my @numbers = (10, 20, 30, 40);

print "Original list: @numbers\n";

# a) Shift - removes first element
my $shifted = shift @numbers;
print "After shift (removed $shifted): @numbers\n";

# b) Unshift - adds element at beginning
unshift @numbers, 5;
print "After unshift (added 5 at beginning): @numbers\n";

# c) Push - adds element at end
push @numbers, 50;
print "After push (added 50 at end): @numbers\n";
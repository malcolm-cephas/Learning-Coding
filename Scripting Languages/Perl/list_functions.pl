
use strict;
use warnings;


my @numbers = (10, 20, 30, 40);

print "Original list: @numbers\n";


my $shifted = shift @numbers;
print "After shift (removed $shifted): @numbers\n";


unshift @numbers, 5;
print "After unshift (added 5 at beginning): @numbers\n";


push @numbers, 50;
print "After push (added 50 at end): @numbers\n";

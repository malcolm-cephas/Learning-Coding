
use strict;
use warnings;


sub print_table {
    my ($num) = @_;
    for my $i (1..10) {
        print "$num x $i = ", $num * $i, "\n";
    }
    print "\n";
}


for my $n (1..10) {
    print "Multiplication Table for $n:\n";
    print_table($n);
}

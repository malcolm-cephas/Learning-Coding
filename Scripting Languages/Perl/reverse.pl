
use strict;
use warnings;


if (@ARGV != 1) {
    die "Usage: perl reverse.pl <filename>\n";
}

my $file = $ARGV[0];


open(my $fh, "<", $file) or die "Cannot open file '$file': $!";


my @lines = <$fh>;
close($fh);


print reverse @lines;

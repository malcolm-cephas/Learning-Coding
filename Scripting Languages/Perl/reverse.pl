#!/usr/bin/perl
use strict;
use warnings;

# Check if filename is passed
if (@ARGV != 1) {
    die "Usage: perl reverse.pl <filename>\n";
}

my $file = $ARGV[0];

# Open the file
open(my $fh, "<", $file) or die "Cannot open file '$file': $!";

# Read all lines into an array
my @lines = <$fh>;
close($fh);

# Print in reverse order
print reverse @lines;
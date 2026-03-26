
print "enter x value : ";
$x=<stdin>;
print "enter y value : ";
$y=<stdin>;
print "enter z value : ";
$z=<stdin>;


my $largest = $x;

if ($y > $largest) {
    $largest = $y;
}
if ($z > $largest) {
    $largest = $z;
}

print "The largest number is: $largest\n";

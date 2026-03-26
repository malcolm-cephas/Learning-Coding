
use strict;
use warnings;

print "Enter an IP address: ";
chomp(my $ip = <STDIN>);

print "Enter an Email address: ";
chomp(my $email = <STDIN>);





my $ip_pattern = qr/^
    (25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)  \.
    (25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)  \.
    (25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)  \.
    (25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)
$/x;

if ($ip =~ $ip_pattern) {
    print "Valid IP address\n";
} else {
    print "Invalid IP address\n";
}




my $email_pattern = qr/^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$/;

if ($email =~ $email_pattern) {
    print "Valid Email address\n";
} else {
    print "Invalid Email address\n";
}

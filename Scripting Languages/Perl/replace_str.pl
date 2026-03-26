$sentence = "Perl is great at manipulating strings, naturally."; 
print "$sentence \n\n"; 
$replacement = "is totally awesome"; 
substr($sentence, 5, 8) = $replacement; 
print "Substituting $replacement staring at 5 and going 8 words \n"; 
print "$sentence \n\n";
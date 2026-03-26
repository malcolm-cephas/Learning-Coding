<?php

$filename = "test.txt";


$file = fopen($filename, "w");
fwrite($file, "PHP File I/O Demonstration\n");
fclose($file);


$file = fopen($filename, "r");
echo fread($file, filesize($filename));
fclose($file);


copy($filename, "test_copy.txt");
echo "<br>File copied successfully!";
?>

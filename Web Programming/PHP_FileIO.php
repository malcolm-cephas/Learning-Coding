<?php
/* Aim: 13. Reading and Writing files using PHP. */
$filename = "test.txt";

// Write
$file = fopen($filename, "w");
fwrite($file, "PHP File I/O Demonstration\n");
fclose($file);

// Read
$file = fopen($filename, "r");
echo fread($file, filesize($filename));
fclose($file);

/* List 2 Exp 4: Copy file from one to another */
copy($filename, "test_copy.txt");
echo "<br>File copied successfully!";
?>

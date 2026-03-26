<?php
/* Aim: 16. PHP Merge and sort arrays descending. */
$a1 = array(10, 50, 20);
$a2 = array(30, 60, 40);

$merged = array_merge($a1, $a2);
rsort($merged);

echo "<h3>Merged and Sorted (Descending):</h3>";
print_r($merged);
?>

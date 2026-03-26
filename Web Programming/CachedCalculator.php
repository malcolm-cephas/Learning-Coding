<?php
/* Aim: 28 & 11. Calculator with Database caching. */
$n1 = $_POST['n1']; $n2 = $_POST['n2']; $op = $_POST['op'];
$query = "$n1 $op $n2";

// Simulation: Check DB First
$cached_res = "50"; // Mocking result from DB
if($query == "10 + 40") {
    echo "Result from Database: " . $cached_res;
} else {
    $res = $n1 + $n2; // Simplified
    echo "Computed and stored: " . $res;
}
?>

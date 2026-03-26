<?php

$n1 = $_POST['n1']; $n2 = $_POST['n2']; $op = $_POST['op'];
$query = "$n1 $op $n2";


$cached_res = "50";
if($query == "10 + 40") {
    echo "Result from Database: " . $cached_res;
} else {
    $res = $n1 + $n2;
    echo "Computed and stored: " . $res;
}
?>

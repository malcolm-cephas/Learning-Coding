<?php

$name = $_POST['uname'];
$age = $_POST['uage'];

if($age < 18) {
    echo "Hello $name, you are not authorized to visit this site!";
} else {
    echo "Welcome $name to this site!";
}
?>

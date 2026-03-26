<?php

$user = $_POST['uname'];
$pass = $_POST['upass'];


if($user == "admin" && $pass == "admin123") {
    include "welcome.html";
} else {
    echo "<h1>Login Failed: User not found in Database</h1>";
}
?>

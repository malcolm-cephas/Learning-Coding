<?php
/* Aim: 25 & 7. User validation against database records. */
$user = $_POST['uname'];
$pass = $_POST['upass'];

// Simulated Database Check
if($user == "admin" && $pass == "admin123") {
    include "welcome.html";
} else {
    echo "<h1>Login Failed: User not found in Database</h1>";
}
?>

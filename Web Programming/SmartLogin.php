<?php
/* Aim: 31 & 14. Smart login, registration, and mismatch logic. */
$uname = $_POST['uname']; $upass = $_POST['upass'];

// Simulated logical decisions
if($uname == "admin" && $upass != "admin123") {
    echo "Password Mismatch Page!";
} elseif($uname != "admin") {
    include "registration.html";
} else {
    echo "Welcome Full Name: Administrator";
}
?>

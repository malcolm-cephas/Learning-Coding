<?php

$uname = $_POST['uname']; $upass = $_POST['upass'];


if($uname == "admin" && $upass != "admin123") {
    echo "Password Mismatch Page!";
} elseif($uname != "admin") {
    include "registration.html";
} else {
    echo "Welcome Full Name: Administrator";
}
?>

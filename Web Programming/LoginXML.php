<?php

$xml = simplexml_load_file("UserXML_Search/users.xml");
$user = $_POST['uname'];
$pass = $_POST['upass'];

$found = false;
foreach($xml->user as $u) {
    if($u == $user) { $found = true; break; }
}

if($found) echo "Welcome " . $user;
else echo "Failed: Incorrect XML credentials.";
?>

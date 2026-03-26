<?php

session_start();

if(!isset($_SESSION['start_time'])) {
    $_SESSION['start_time'] = time();
    $_SESSION['name'] = "Naveen";
}

echo "Hello " . $_SESSION['name'] . ". Session started at: " . date("H:i:s", $_SESSION['start_time']);
echo "<br><a href='logout.php'><button>Logout</button></a>";




?>

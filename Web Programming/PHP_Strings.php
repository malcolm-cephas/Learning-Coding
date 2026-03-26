<?php

$str = "Welcome to Web Programming Lab";
echo "String: $str<br>";
echo "a) Length: " . strlen($str) . "<br>";
echo "b) Word count: " . str_word_count($str) . "<br>";
echo "c) Reversed: " . strrev($str) . "<br>";
echo "d) Search 'Web': " . (strpos($str, "Web") !== false ? "Found" : "Not Found");
?>

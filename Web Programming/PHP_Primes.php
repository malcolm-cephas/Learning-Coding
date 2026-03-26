<?php

echo "<h3>Prime numbers between 1 and 50</h3>";
for ($i = 2; $i <= 50; $i++) {
    $count = 0;
    for ($j = 1; $j <= $i; $j++) {
        if ($i % $j == 0) $count++;
    }
    if ($count == 2) echo $i . " ";
}
?>

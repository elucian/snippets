<?php

/* default syntax */
$i = 1;
while ($i <= 10) {
    echo $i++, ",";
}

echo "<br>";

/* alternative syntax */
$i = 1;
while ($i <= 10):
    echo $i,",";
    $i++;
endwhile;
?>
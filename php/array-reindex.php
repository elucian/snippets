<?php

/* create simple vector */
$a = [1,2,3,4,5]; //declare empty array

echo "before:";print_r($a); echo "<br>";

/* remove 2 elements */
unset($a[1]);
unset($a[3]);

echo "after:";print_r($a); echo "<br>";

/* reindex array */
$a = array_values($a);
echo "reorder:";print_r($a); echo "<br>";
?>
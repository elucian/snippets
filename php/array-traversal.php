<?php

$a = [2,4,6,8,10]; //define array
$c = count($a);    //number of elements

// access array elements by index
for ($i = 0; $i < $c; $i++) {
  echo $a[$i], ",";
}

echo "<br>";

// sequential access, element by element
foreach ($a as $e) {
  echo $e, ",";
}
?>
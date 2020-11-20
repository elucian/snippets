<?php

/* declare array of 3 strings */
$fruits = array("Orange","Banana","Apple");

/* quick introspection for debug */
echo var_dump($fruits), "<br><br>";

/* string interpolation using array elements */
echo "$fruits[0],$fruits[1],$fruits[2]";
?>

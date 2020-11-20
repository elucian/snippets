<?php
//given two variables
$a = 1; $b = 2;

//check "greater then" relation
if ($b > $a) {
  echo "$b is bigger than $a";
  $b = $a; // alter b	
} 
echo "<br>"; //new line

//check "equal" relation
if ($b == $a) 
  echo "$b is equal to $a";
else
  echo "unexpected";

?>
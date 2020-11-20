<?php

/* function with output parameter */
function add(&$x, $y) {
  $x += $y;
}

/* call function and modify $r */
$r = 0;     //prepare a result variable
add($r,1);	//call function using a variable
echo "$r";  //expect: 1 (parameter is modified)

?>

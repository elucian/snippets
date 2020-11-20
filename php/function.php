<?php

/* function with two optional parameters */
function add($x, $y = 0, $z = 0) {
  return $x + $y + $z;
}

/* call function 3 times, 
   and make a bulet list with the results */
echo "<ul>";
echo "<li>",add(1),"</li>";
echo "<li>",add(1,1),"</li>";
echo "<li>",add(1,1,1),"</li>";
echo "</ul>";

?>

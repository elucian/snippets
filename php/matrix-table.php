<?php

/* define a matrix with 3x3 = 9 elements */
$m = array(
	  array(0,1,2)
	 ,array(3,4,5)
	 ,array(6,7,8)
	);

/* modify diagonal elements */
$m[0][0] = 1;
$m[1][1] = 1;
$m[2][2] = 1;

/* making a table with bordr */
echo '<table style="border: solid;">';
foreach ($m as $row) {
  echo "<tr>";
  foreach ($row as $elm) {
	 echo '<td width="14px", height="14px" style="border: 1px solid">';
     echo $elm;
     echo "</td>";
  }
  echo "</tr>";
}
echo "</table>";

?>
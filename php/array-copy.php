<?php
$a1 = array(1, 2, 3);

//assign array copy
$a2 = $a1;
$a2[0] = 8; // change first element,
echo "a2=";print_r($a2); echo "<br>";
echo "a1=";print_r($a1); echo "<br>"; //unchanged

echo "<br>";
	
//assign array reference	
$a3 = &$a1;
$a3[0] = 5; // change first element,
echo "a3=";print_r($a3); echo "<br>";
echo "a1=";print_r($a1); echo "<br>"; //changed
?>
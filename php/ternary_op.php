<?php
$v = 1;
$r = (1 == $v) ? 'Yes' : 'No'; // $r is set to 'Yes'
echo $r; // expected: Yes

echo "<br>";

$r = (3 == $v) ? 'Yes' : 'No'; // $r is set to 'No'
echo $r; // expected: No
?>
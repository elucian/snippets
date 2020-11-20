<?php
$a = 1; //global variable
$b = 2; //global variable

function firstTest() {
    global $a, $b;
    return $a + $b;
}

function secondTest() {
    $a = 4;  //local
    $b = 4;  //local
    return $a + $b;
}

echo firstTest();  // outputs: 3
echo "<br>";
echo secondTest(); // outputs: 8

echo "<br>";
echo "\$a = $a <br>"; // a = 1
echo "\$b = $b <br>"; // b = 2 	
?>

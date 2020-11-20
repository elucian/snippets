<?php
/* string is enclosed in double quotes */
$string1  = "It's my turn to say:"; //double quote string
$string2  = '"Hello world!"'; //single quote string

echo $string1, "<br>";
echo $string2, '<br>';
	
$i = 123;  //positive integer
$n =-123;  //negative integer
$d = 1.23; //float

/* boolean and null */
$b = true;
$f = false;	
$N = null;	

/* do not try to print booleans */
echo "\$b = $b", '<br>'; //unexpected: $b = 1
echo "\$f = $f", '<br>'; //unexpected: $f =   
echo "\$N = $N", '<br>'; //unexpected  $N = 

/* variable introspection var_dump() */
echo var_dump($b), '<br>';
echo var_dump($f), '<br>';
echo var_dump($N), '<br>';
?>

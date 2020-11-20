<?php

/* recursive function */
function factorial($a)
{
    if ($a  == 0) { 
		return 1;
	} else {
		return $a * factorial($a - 1);
	}	
}

echo factorial(10),"<br>";
echo factorial(20),"<br>";
?>
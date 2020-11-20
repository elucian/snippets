<?php
/* demo for goto label end: */
$i = 0;
do {
  $j = 0;	
  do {
     $j++;
	 echo "($i, $j)";
	 if (($i == 3) and ($j == 3)): 
		goto end; //jump to end:
	 endif; 
  } while ($j < 3);	 
  echo "<br>";	
  $i++;		
} while(true); //infinite loop

//jump label end:
end: echo "<br>","done"; 

?>

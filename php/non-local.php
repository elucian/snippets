<?php
/* function foo can create a global */
function foo() {
  global $x;	
  function bar() //local function
  {   global $x;
	  echo $x;
  }
  $x = 1; //$x is not local
  bar();  //call local function	 
}

// $x do not yet exist
foo(); // call function

echo "<br>",$x; //magically the $x variable appears
?>
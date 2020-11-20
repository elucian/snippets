<?php
function test() {
 try { 
   throw new Exception("oops!"); 
 } 
 catch (Exception $e) { 
   echo $e->getMessage(),'<br>'; 
 }
 finally {
   return "done.";
 }
} //end function

echo test(); // oops!<br>done.
?>
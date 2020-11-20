<?php 
  /* In PHP you can declare variables
     of type number using following notation: */
  $first  = 1;   // declare a number
  $second = 2.5; // declare second number  
  
  echo "sum = ";
  echo $first + $second;
  
  /* PHP enable you to concatenate, 
     but the result may surprise you: */
  echo $first.$second; // expected 12.5
?>
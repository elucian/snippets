<?php

host(); // call before is defined

/* wrapper function */
function host() {
  function bar() //local function
  {
	  foo(); //call local function
  }

  function foo() //local function
  {
    echo "I'm foo!";
  }

  bar(); //call local function	 
}
?>
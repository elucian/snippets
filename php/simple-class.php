<?php

/* define a simple class */
class SimpleClass
{
    // property declaration
    public $var = 'default value';

    // method declaration
    public function displayVar() {
        echo $this->var,"<br>";
    }
}

// create a new object
$object = new SimpleClass;

// call a method
$object->displayVar();

// access public property
echo $object->var;
?>
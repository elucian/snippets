<?php

// declare object data type Person
class Person {
    function Person($name, $age) {
        $this->name = $name;
	    $this->age  = $age;
    }
}

// create an object of type Person
$barbu = new Person("Barbu",35);

// show the "name" attribute
echo $barbu->name;
?>
<?php
const EOL = "<br>";

// base class
class Foo
{
    public function printItem($string)
    {
        echo 'Foo: ' . $string . EOL;
    }
    
    public function printPHP()
    {
        echo 'PHP is great.' . EOL;
    }
}

// extended class
class Bar extends Foo
{
	//overvrite function: printItem  
    public function printItem($string)
    {
        echo 'Bar: ' . $string . EOL;
    }
}

$foo = new Foo(); // base object
$bar = new Bar(); // extended object

/* using extended object */
$foo->printItem('foo'); // Output: 'Foo: foo'
$foo->printPHP();       // Output: 'PHP is great' 

/* using extended object */
$bar->printItem('bar'); // Output: 'Bar: bar'
$bar->printPHP();       // Output: 'PHP is great'
?>
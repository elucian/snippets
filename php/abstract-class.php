<?php

/* define a abstract class */
abstract class Foo
{
    public static $my_static = 'foo';

    public static function staticValue() {
        return self::$my_static;
    }
}

//accessing static property
echo Foo::$my_static;    // foo
echo "<br>";

//accessing static method
echo Foo::staticValue(); // foo
echo "<br>";

?>
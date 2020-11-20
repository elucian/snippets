<?php
/* define first trait */
trait Hello {
    public function sayHello() {
        echo 'Hello ';
    }
}

/* define second trait */
trait World {
    public function sayWorld() {
        echo 'World';
    }
}

/* using two traits */
class MyHelloWorld {
    use Hello, World;
    public function sayExclamationMark() {
        echo '!';
    }
}

/* testing the new class */
$o = new MyHelloWorld();
$o->sayHello(); //first trait function
$o->sayWorld(); //second trait function
$o->sayExclamationMark(); //class function
?>
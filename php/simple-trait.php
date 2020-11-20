<?php
/* define a trait */
trait Hello {
    public function sayHello() {
        echo 'Hello World';
    }
}

/* using two traits */
class MyHelloWorld {
    use Hello;
    public function sayMark() {
        echo '!';
    }
}

/* testing the new class */
$o = new MyHelloWorld();
$o->sayHello(); //trait function
$o->sayMark();  //class function
?>
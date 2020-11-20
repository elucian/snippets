<?php
class BaseClass {
    function __construct() {
        echo "BaseClass constructor","<br>";
    }
}

class SubClass extends BaseClass {
    function __construct() {
        parent::__construct();
        echo "SubClass constructor","<br>";
    }
}

$obj = new BaseClass();
$obj = new SubClass();
?>
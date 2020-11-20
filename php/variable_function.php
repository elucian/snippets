<?php
function foo() {
    echo "In foo()","<br>";
}

function bar()
{
    echo "In bar():","<br>";
}

// variable function call
$func = 'foo';
$func();  // This calls foo()

// variable function call
$func = 'bar';
$func();  // This calls bar()
?>
<?php
declare(strict_types=1);

/* function with strict type */
function sum(int $a, int $b) {
    return $a + $b;
}

sum(1.5, 2.5);
?>
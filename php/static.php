<?php
function get_next() {
    static $x = 0;
    return ++$x;
}

echo get_next();  // outputs: 1
echo get_next();  // outputs: 2
echo get_next();  // outputs: 3	
?>

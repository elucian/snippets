<?php

// default syntax, C like: */
for ($i = 1; $i <= 10; $i++) {
    echo $i," ";
}

// end of line, prepare for next
echo "<br>"; 

// alternative syntax with break:
for ($i = 1;; $i++):
    if ($i > 10) {
        break;
    }
    echo $i," ";
endfor;
?>
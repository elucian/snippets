<?php
$x = 0; //
try {
    if (!$x) {
        throw new Exception('Division by zero.');
    }
    echo 1/$x;  
} catch (Exception $e) {
    echo 'Exception: ',  $e->getMessage(), "\n";
}
?>
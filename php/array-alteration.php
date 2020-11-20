<?php
// hash map constructor
$test = ["a" => 0
        ,"b" => 0
        ,"c" => 0
		];

//sequential acess
$v = 2;
foreach ($test as $key => &$value) {
  $value = $v;//alter each value
  $v += 2;    //prepare next value	
}
// hash map is modified:
var_dump($test);
?>
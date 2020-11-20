/* create non null Boolean object */ 
var a = Boolean(false);     // boolean 
var b = new Boolean(false); // object

console.log(a === false) //true  (expected)
console.log(b === false) //false (unexpected)

// a is "boolean" works as expected
if (a) 
   console.log("a is true"); 
else 
   console.log("a is false"); //expected

// b is "object" works in unexpected way
if (b) 
   console.log("b is true");  // unexpected
else 
   console.log("b is false"); 
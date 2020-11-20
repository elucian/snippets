/* parameter p2 is optional */
function myFunction(p1, p2 = 10) { 
  return p1 * p2; 
  } 

/* test function invocation */
let x = myFunction(5, 5); 
let y = myFunction(5); 

console.log(x); //expected 25
console.log(y); //expected 50

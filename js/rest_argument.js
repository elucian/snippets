// rest arguments
function test(a, b, ...more) {
  console.log("a = " + a);  
  console.log("b = " + b);  
  console.log(more); 
}

// call function: a=1, b=2, more = [3, 4, 5]
test(1,2,3,4,5); 

// call function: a="x", b="y", more = ["z"]
test("x","y","z"); 

/* function that return random (0,1) */
function draw() {
  // generate a number between 0 and 1
  let x = Math.random();
  // conditional assignment
  let y = x > 0.5 ? 1: 0;
  return String(y);
}

// test draw() function
console.log(draw()+draw()+draw()); //010  
console.log(draw()+draw()+draw()); //110

let chanse = '0';
for (i = 1; i < 50; i++) {
  //conditional chain
  chanse = draw() == 1 ? "yes":
           draw() == 1 ? "yes":
           draw() == 1 ? "yes":
           "bad luck!";
  console.log(chanse); //
};
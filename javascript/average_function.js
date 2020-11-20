// calculate median number (average)
function avg (...args) {
  let sum = 0;
  for (let n of args) {
    sum += n;
  }
  return sum/args.length;
}

// fixture (test data)
let data = [0,1,2,3,4,5,6,7,8,9,10];

// normal call (we can not use fixture)
let test = avg(0,1,2,3,4,5,6,7,8,9,10);

// call using spread operator and fixture:
let median = avg(...data); //spreading an array

// check if the test is succesful
console.log(median == test); //expect true
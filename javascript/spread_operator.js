// expect 3 arguments
function sum(x, y, z) {
  return x + y + z;
}

// spread array elements by position
const numbers = [1, 2, 3];
const result = sum(...numbers);

console.log(result) // expected output: 6
// return two results
function two(a, b) {
  return {a, b};
};

// capture 2 closures
let result = two(4,7);

// use second closure
console.log(result.a); // 4
console.log(result.b); // 7

// define high order function
function counter() {
  var count = 0;
  return {
    getCount: function getCount() {
      return count;
    },
    increment: function increment() {
      count += 1;
    }
  };
};

// capture 2 closures
let closure = counter();

// use first closure
closure.increment(); //increment once
closure.increment(); //increment twice

// use second closure
console.log(closure.getCount()); //2

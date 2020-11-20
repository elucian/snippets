// create arrow functions
const f = (x,y) => { return x + y };
const g = (x)   => { return x };
const h = ()    => { return 1 };

// single parameter do not require ()
const p = x => { return x };

// test arrow functions
console.log( f(4,4) ); // 8
console.log( g(4) );   // 4
console.log( h(4) );   // 1
console.log( p(7) );   // 7

// you can even do this:
test =  ((a, b) => {return a + b})(4,2);
console.log(test); // 6
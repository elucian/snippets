/* this is a combined notation
   between deconstruction assignment
   and the rest operator ... */

// collect rest of elements
let [x,...rest] = [1,2,3,4,5];
console.log(rest); // [3,4,5];

// collect rest of attributes
let {a,...test} = {a: 1, b: 2, c: 3};
console.log(test); // {b: 2, c: 3};

// collect from map into array
let [first,...other] = new Map ([["a",1], ["b",2], ["c",2]])
console.log(other[0]); //["b",2]

// collect from set into array
let [...unique] = new Set ([1,1,2,2,3,3]);
console.log(unique); // [1,2,3]
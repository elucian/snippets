/* empty Set */
let mySet = new Set();

/* add some elements */
mySet.add(1);  // Set [1]
mySet.add(2);  // Set [1, 2]
mySet.add(2);  // Set [1, 2]
mySet.add(3);  // Set [1, 2, 3]

console.log([...mySet]); // [1,2,3]
console.log('size='+mySet.size); // 3

/* remove one element */
mySet.delete(3);           
console.log(mySet.has(3))  // false
console.log('size='+mySet.size); // 2
console.log([...mySet]); // [1,2]
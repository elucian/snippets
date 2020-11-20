// create empty Map object
let myMap = new Map();

// prepare 3 keys
let keyString = 'a string'
let keyObj = {}
let keyFunc  = function() {};
let keyArray = [1,2];

// setting the values
myMap.set(keyString, "key is a string");
myMap.set(keyObj,    "key is object");
myMap.set(keyFunc,   'key is a function');
myMap.set(keyArray,  'key is a array');

// reading size of the map
console.log("Map size = " + myMap.size); // 4

// getting the values
console.log(myMap.get(keyString)   );
console.log(myMap.get(keyObj)      );
console.log(myMap.get(keyFunc)     );
console.log(myMap.get(keyArray)    );
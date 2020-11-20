/* array traversal */
var array = [4,5,6];

// read keys
for (element in array) {
    console.log(element);  
}
console.log(typeof(element)) // 'string'

// read values
for (element of array) {
    console.log(element);  
}
console.log(typeof(element)) // 'number'
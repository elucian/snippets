/* associative array */
var array = { 1:4, 2:5, 3:6 };

// read array values
for (x in array) {
    console.log(`array[${x}]= ${array[x]}`);  
}

// add a new element in array
array[4] = 7;

// remove an element from array
delete array[1];

// deconstruction of pairs 
for ([key,value] of Object.entries(array))  { 
   console.log(key + "->" + value); 
}
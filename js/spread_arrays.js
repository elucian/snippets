/* clone arrays */
var array = [1, 2, 3];  // fixture
var clone = [...array]; // spread elements

// test different arrays
clone[3] = 4;
console.log(clone); // [1, 2, 3, 4]
console.log(array); // [1, 2, 3]

/* concatenate arrays */
merge = [0, ...array, ...clone]
console.log(merge); // [0,1,2,3,1,2,3,4]
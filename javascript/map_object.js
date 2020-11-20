// create a Map 
var map = new Map(
    [
      ["a", 1], 
      ["b", 2], 
      ["c", 3] 
    ]); 

// elements of map are unique
for ([key, value] of map) {
  console.log("key = "+ key + ", value = "+ value);
}

// convert back to array
console.log(Array.from(map));
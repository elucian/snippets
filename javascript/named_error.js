// named exception
let exception = new Error('my exception');

// create a named exception
try {
  throw exception
}
catch (e) {
  if (e instanceof Error) {
     console.error(e.message);
  } else {
     console.log("unexpected exception");
  }
}
// your program can continue
console.log("continue program")
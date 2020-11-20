// create an error and handle it
try {
  throw 'error';
}
catch (e) {
  console.error(e); 
}
finally {
  console.log('done')
}
// your program can continue
console.log("continue program")
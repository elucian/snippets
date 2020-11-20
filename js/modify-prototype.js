/* define constructor for Person */
function Person(name) {
  // property and method definitions
  this.name  = name;

  // public method: hello
  this.hello = function() {
    console.log("hello " + this.name);
  }
};

/* create an object */
let person = new Person('Smith');

/* extend Person with a new function */
Person.prototype.farewell = function() {
  console.log("By "+ this.name );
};

person.hello();   // test internal method
person.farewell();// test external method
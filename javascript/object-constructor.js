/* object constructor */
function Person(name) {
  this.name = name;
  this.greetings = function() {
    console.log('Hi! I\'m ' + this.name + '.');
  };
};

// instantiate two objects
var john  = new Person("John");
var petru = new Person("Petru");

john.greetings(); // Hi! I'm John
petru.greetings();// Hi! I'm Petru

// using function call()
person = {name:"Avram"}
john.greetings.call(person);

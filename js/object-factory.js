/* object factory function */
function createNewPerson(name) {
  var obj = {};
  obj.name = name;
  obj.greeting = function() {
    console.log('Hi! I\'m ' + obj.name + '.');
  };
  return obj;
}

/* create new objects */
var johnPerson = createNewPerson("John");
var petruPerson = createNewPerson("Petru");

johnPerson.greeting();  //call object method
petruPerson.greeting(); //call object method
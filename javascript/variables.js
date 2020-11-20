/*
  Today, A simple guide for making variables!
  This will cover most types of variables.
*/

//First, the regular types of variables -- numbers and strings

var string1 = "My String!";
var number1 = 0.1134;

//You can also combine variables together while creating a new one.

var combined1 = string1 + number1;

/*
	Next, comes the more advanced types of variables
	The more common type of advanced variable is an array
*/

var array1 = ["You can list strings and ",
             1000,
             ['And even arrays inside arrays!'],
             'Including combining strings',
             combined1 + combined1];
/*
	To refrence a certain output from an array, you use these symbols
  --> [] <--
  For example,
*/

var firstIndex = array1[0]; //firstIndex should equal "You can list strings and ".
var secondIndex = array1[1]; //This variable should equal 1000
//Notice how the first element starts at 0. That is very important!!!

/*
	Some more advanced types of variables include JSON and functions.
*/

var function1 = () => null;
//This wont do anything, it will be covered in the functions snipped
function function2(){
	return null;
}
//This will do the same thing, but there are small differences between the two.

var json1 = {
  string: "Woah!",
  number: 1,
  array: ['This is an array.',35],
  json: {
    string: "And so on."
  	//Other data.
  }
}
//These JSON variables can be called using dots.

json1.string; //Returns "Woah!"
json1.array[0] //Returns 'This is an array'
json1.json.string //Returns "And so on."

//That is the end of this snippet! ~fin

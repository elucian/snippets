/*
  A fully detailed tutorial of how strings and calling functions works.
*/

//First, you have to call your function.
//Then, add an argument. In this case, something called a "string" will be an argument.

alert("Hello World!"); //an example of a function being called with 1 argument.

//You can also "combine" strings with variables, by using 2 methods
var world = "World";

alert(`Hello ${world}!`)
alert('Hello ' + world + '!');

/*
Note the differences in the strings. The first one uses `` as boundaries.
The second one uses '' as boundaries, thereso not allowing the use of ${}
Also, another difference is that ${variable} can only be used in a version called ES6, while the second method can be used in all versions
Of most browsers.

You can also combine strings
*/
alert("Hello " + "World!");

/*
Also note, both '' and "" are the same. The only difference is that you dont have to escape the opposite way.
Escaping a character is commonly used in most coding languages. In here, this is how you would do it.
"Thats a \"Funny\" Joke!" \" is used to escape characters.
'Thats a "Funny" Joke!' You do not have to escape when using the opposite chracter.

~Fin
*/

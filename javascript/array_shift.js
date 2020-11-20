/**********************************
    Test a function array, shift() 
***********************************/

// define a fixture for testing array.shift()  
var bike = ['road', 'mountain', 'cruiser'];
document.write(bike[0],",", bike[1],",", bike[2],"<br>");    

// shift all elements to the left  
var test = bike.shift();

// shift has removed one element  
document.write(bike[0],",", bike[1],",", bike[2],"<br>");  

// removed element was captured in new variable  
document.write(test);

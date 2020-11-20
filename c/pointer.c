#include <stdio.h>

int main () {

   int   v = 5;  // an integer variable 
   int  *p = &v; // a pointer to integer variable    

   printf("Value of  p: %0X\n", p );   
   printf("Value of *p: %d\n", *p );

   *p = 10;

   printf("Value of *p: %d\n", *p );
   printf("Value of  v: %d\n",  v );   

   return 0;
}

//Output:

/*
Value of  p: 6C11EA04
Value of *p: 5       
Value of *p: 10      
Value of  v: 10      
*/
#include <stdio.h>

int main () {

   int   v = 5;  // an integer variable 
   int  *p = &v; // a pointer to integer variable    

   //initial value
   printf("p = %0X\n", p );   
   
   p = p + 1; //increment   
   printf("p = %0X\n", p );
   p = p - 1; //decrement
   printf("p = %0X\n", p );

   return 0;
}
/* out:
p = 384042E4
p = 384042E8
p = 384042E4
*/
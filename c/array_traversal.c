#include <stdio.h>


int main () {

   //define a vector of 10 elements
   int  v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   
   int  i; //control variable
   int *p; //temporary pointer 

   p = v; // same as &v
   
   printf("Address of v: %X\n", v ); // v is a read only pointer
   printf("Address of v: %X\n",&v ); // pointing to first element	   
   printf("Content of v: %d\n",*v ); // expect: 10 this is first element	  

   /* array traversal using pointer arithmetic */
   for ( i = 0; i < 10; i++, p++) {
      printf("v[%d] = %d\n", i, *p);
   }
	
   return 0;
}
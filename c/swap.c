#include <stdio.h>
void swap(int *x, int *y) {
   register int t; //temporary value
   t = *y; *y = *x; *x = t;
}
 
int main () {

   int a = 1, b = 2;

   printf("a = %d b = %d \n",a,b);
   swap(&a, &b); //function call
   
   printf("a = %d b = %d \n", a, b);
   return 0;
}
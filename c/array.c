#include <stdio.h>
 
int main () {
   /*  array with 10 elements */
   int a[10] = {0};
 
   /* array initialization */         
   for (int i = 0; i < 10; i++ ) {
      a[i] = i; 
   }
   
   /* array traversal and print */
   for (int i = 0; i < 10; i++ ) {
      printf("a[%d] = %d\n",i,a[i]);
   }
 
   return 0;
}
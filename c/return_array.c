#include <stdio.h>
#include <stdlib.h>

int *vector(int n)
{
    int *a = calloc(n, sizeof(int));
    if ( a != NULL ) {
       for( size_t i=0; i<n; i++ )
           a[i] = i + 1;       
    }           
    return a;
}

int main () {
   int *v, i, x = 10;
   
   /* generate a vector with x number of elements */
   v = vector(x);
   
   /* array traversal using pointer arithmetic */
   for (i = 0; i < x; i++) {
      printf("%d,", *v);
      v++;
   }
	
   return 0;
}
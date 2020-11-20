#include <stdio.h>
#include <stdlib.h>

/* goal parameters */
int start = 5;
int stop  = 10;

/* a generator function */
int next()
{
    static int c = 0;
    if (c == 0) {
      c = start;
    };
    c++;
    return c; 
}

int main () {
   int i = 0;
   i = start;
   
   while (i <= stop) {
      printf("%d,", i);
      i = next();       
   }
   return 0;
}
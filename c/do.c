#include <stdio.h>
int main () {
   // control variable
   int x = 1;
   // start loop
   do {
      x = x + 1;
   } while ( x < 4 );
   // end loop
   printf("x = %d", x); // expect to print 4
   return 0;
}
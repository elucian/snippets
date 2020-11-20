#include <stdio.h>
#include <string.h>
 
typedef struct {
   unsigned int one  :1;
   unsigned int two  :1;
   unsigned int three:1;
} Mask;
 
int main( ) {

   Mask b;
   b.one   = 1;
   b.two   = 2;
   b.three = 3;

   printf( "b.one = %i\n",   b.one);  // 1
   printf( "b.two = %i\n",   b.two);  // 0
   printf( "b.three = %i\n", b.three);// 1

   return 0;
}
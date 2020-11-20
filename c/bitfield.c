#include <stdio.h>
#include <string.h>
 
struct {
   unsigned int one  :1;
   unsigned int two  :1;
   unsigned int three:1;
} b;
 
int main( ) {

   b.one   = 1;
   b.two   = 0;
   b.three = 3;

   printf( "b-size %d\n", sizeof(b)); // 4
   printf( "b.one = %i\n",   b.one);  // 1
   printf( "b.two = %i\n",   b.two);  // 0
   printf( "b.three = %i\n", b.three);// 1

   return 0;
}
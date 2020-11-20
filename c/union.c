#include <stdio.h>
#include <string.h>
 
union Test {
   int i;
   float f;
   char s[20];
};
 
int main( ) {

   union Test a;        

   a.i = 2;
   printf( "a.i = %d\n", a.i);
   
   a.f = 2.5;
   printf( "a.f = %f\n", a.f);
   printf( "a.i = %d\n", a.i);
   
   strcpy( a.s, "test");
   printf( "a.s = %s\n", a.s);
   printf( "a.i = %d\n", a.i);
   printf( "a.f = %f\n", a.f);
   
   return 0;
}
#include <stdio.h>
int main()
{
   int    a = 0;
   float  b = 1.5;
   
   //explicit conversion
   a = (int)b; 
   printf("a = %d\n", a);
   
   //implicit conversion
   b = a;
   printf("a = %f\n", b);
   return 0;
   
}
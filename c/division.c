#include <stdio.h>
int main()
{
   int a = 10, b = 20;
   double  c,d;
   
   // integer division
   c = a / b;
   printf("c = %lf\n", c); // 0.000000

   // float division
   d = (double) a / b;
   printf("d = %lf\n", d); // 0.500000
   
   return 0;
}
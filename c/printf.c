#include <stdio.h>
int main( ) {

   /* right justified with of 10  */
   printf("+----------+\n");   
   printf("|%10d|\n", 123);   
   printf("|%10d|\n", 12356);   
   printf("|%10d|\n", 1234567890);   
   printf("+----------+\n");

   /* right justified with of 10  with fill in 0 */
   printf("|%010d|\n", 123);   
   printf("|%010d|\n", 12356);   
   printf("|%010d|\n", 1234567890);   
   printf("+----------+\n");

   /* left justified with of 10  */
   printf("+----------+\n");   
   printf("|%-10d|\n", 123);   
   printf("|%-10d|\n", 12356);   
   printf("|%-10d|\n", 1234567890);   
   printf("+----------+\n");
   
   /* right justified float */
   printf("|%10.2f|\n", 123.123);   
   printf("|%10.2f|\n", 12356.123);   
   printf("|%10.2f|\n", 1234567890);   
   printf("+----------+\n");

   return 0;
}
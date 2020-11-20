#include <stdio.h>
#include <string.h>

int main () {

   char hello[] = "Hello ";
   char world[] = "World ";
   char both[12];
   int  len ;

   /* copy hello to both */
   strcpy(both, hello);
   printf("strcpy(both, hello):  %s\n", both );

   /* concatenates str1 and str2 */
   strcat( both, world);
   printf("strcat(both, world): %s\n", both );

   /* total lenghth of both after concatenation */
   len = strlen(both);
   printf("strlen(both) : %d\n", len );

   return 0;
}
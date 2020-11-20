#include <stdio.h>

int main () {

   char *capitals[] = {
      "Washington",
      "London",
      "Bucharest",
      "Moscow",
      "New Delhi"
   };
   
   int i = 0;

   for ( i = 0; i < 5; i++) {
      printf("capitals[%d] = %s\n", i, capitals[i] );
   }
   
   return 0;
}
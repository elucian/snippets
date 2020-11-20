#include <stdio.h>

int main() {

   FILE *f; // declare file
   char str[255]; // buffer string

   /* open file for read */
   f = fopen("test.txt", "r");
   
   /* read first word */
   fscanf(f, "%s", str);
   printf("%s\n", str );

   /* read rest of line from file */
   fgets(str, 255, (FILE*)f);
   printf("%s\n", str );
 
   return 0;
}
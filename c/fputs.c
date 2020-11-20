#include <stdio.h>

int main() {

   FILE *f; //declare a file f"

   /* open f file */
   f = fopen("test.txt", "w+");
   fprintf(f, "This is test\n");
   fputs("This is test\n", f);
   
   /* close f file */
   fclose(f);  

   return 0   
}
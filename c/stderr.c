#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno; //global variable
int main () {
   FILE * f;
   //try to open file "test"
   f = fopen ("test", "r");   

   //check if operation was successful
   if (f == NULL) {   
      fprintf(stderr, "Error: %d, %s\n", errno, strerror(errno));
   } else {   
      fclose (f);      
   }   
   return 0;
}
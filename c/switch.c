#include <stdio.h>
 
int main () {
   char result = 'B';
   printf("enter your result:");
   scanf("%c",&result);
   switch(result) {
      case 'A' :
         printf("Congratulation, you passed!\n" );
         break;
      case 'B' :
      case 'C' :
      case 'D' :
         printf("You have passed\n" );
         break;
      case 'F' :
         printf("Sorry, you have failed\n" );
         break;
      default :
         printf("Invalid result\n" );
   }  
   return 0;
}
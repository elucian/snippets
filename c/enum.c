#include <stdio.h>
enum option {Up, Down, Left, Right}
  
int main() 
{ 
   int i;
   menu: //this is a label
   printf("0 = Up\n");
   printf("1 = Down\n");
   printf("2 = Left\n"); 
   printf("3 = Right\n"); 
   printf("select:"); 
   //read menu option
   scanf("%d",&i);
   printf("\n");
   switch (i) {
      case Up:    printf("up"); break;
      case Down:  printf("\n"); break;
      case Left:  printf("0 = Up\n"); break;
      case Right: printf("0 = Up\n"); break;
      default:
         printf("Invalid entry, try again\n"); 
         goto menu; //find label and repeat
      break;
   }    
   return 0; 
} 
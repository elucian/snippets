#include <stdio.h>
int main( ) {

   int x;

   printf( "Input integer:\n");
   scanf("%d", &x);

   printf("\nYour integer %d",&x);

   char s[250];
   
   printf( "Input one string:");
   scanf("%s", &s);
   printf("\nYour string: %s",&s);
   

   return 0;
}
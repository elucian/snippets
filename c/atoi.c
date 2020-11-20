#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[10]; 
   int i;      
   
   i = atoi("12345"); //convert string  to integer
   sprintf(a,"%d",i); //convert integer to string

   printf("i = %d\n",i);
   printf("a = %s\n",a);
   return 0;
}
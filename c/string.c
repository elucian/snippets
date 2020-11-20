#include <stdio.h> 
#include <string.h>


int main () { char a[12] = "foo";
     char b[12] = "bar";
     char c[12];
     int l;
     
     printf("a = %s\n", a );
     printf("b = %s\n", b );
     
     strcpy(c, a);  //copy strings 
     printf("c = %s\n", c ); 


     l = strlen(a); //string length 
     printf("before length = %d\n", l);
     
     strcat( a, b); //concatenate strings 
     printf("strcat( a, b): %s\n", a );

     l = strlen(a); //string length 
     printf("after length = %d\n", l);

     return 0;     
 }
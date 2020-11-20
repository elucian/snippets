#include <stdio.h>
int main()
{
    //control variable
    int i = 1;
    
    //start loop
    while (i < 4) 
    {
       i = i + 1;
    }    
    //end loop
    printf("i = %d", i); // expected to print 4
    return 0;
}
#include <stdio.h>
/* Demonstration for copy two simple stuct instances 
   The copy is not by reference is by value.
*/
struct Foo {
    char c;
    int i;
    double d;
    } foo1,foo2;

int main()
{
    foo1.c = 'a';
    foo1.i = 1;
    foo1.d = 10.5;
    
    foo2 = foo1;  //copy
    foo2.c = 'b'; 
    
    printf("foo1.c = %c\n",foo1.c); // expect a
    printf("foo1.i = %d\n",foo1.i); // expect 1
    printf("foo1.d = %f\n",foo1.d); // expect 10.5
    
    printf("foo2.c = %c\n",foo2.c); // expect b
    printf("foo2.i = %d\n",foo2.i); // expect 1
    printf("foo2.d = %f\n",foo2.d); // expect 10.5
    
    return 0;
}
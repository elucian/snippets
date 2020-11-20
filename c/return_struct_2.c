#include <stdio.h>
#include <stdlib.h>

typedef struct {
      int x; 
      int y;
    } Struct; //define a type

// function with multiple results    
Struct get_s() {
    Struct s = {1, 2};
    return s;
}

int main () {
   Struct s;   //variable not pointer
   s = get_s(); 
   printf ("s = {%d,%d}",s.x,s.y);
   return 0;
}
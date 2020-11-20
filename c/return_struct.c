#include <stdio.h>
#include <stdlib.h>

typedef struct {
      int x; 
      int y;
    } Struct; //define a type

// function with multiple results    
Struct *get_s() {
    static Struct s;
    s.x = 1;
    s.y = 2;
    return &s;
}

int main () {
   Struct *s;   //pointer to a structure
   s = get_s(); 
   printf ("s = {%d,%d}",s->x,s->y);
   return 0;
}
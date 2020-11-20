#include <stdio.h>

/* declare a struct named point */
struct point {
   int x;
   int y;
};

int main() {

  struct point test = { 3, 7 }; //instance of point
  struct point *p = &test;      //reference to struct instance

  // Using "*" to de-reference struct members
  printf("p.x = %d\n", (*p).x );
  printf("p.y = %d\n", (*p).y );

  (*p).x = 2; // alter first member of the struct
  (*p).y = 4; // alter second member of the struct
  
  // Using "->" to de-reference struct members
  printf("p.x = %d\n", p->x);
  printf("p.y = %d\n", p->y);
}  
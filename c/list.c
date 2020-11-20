#include <stdio.h>

/* declare a struct named point */
typedef struct {
   int x;
   int y;
} point;

typedef struct list t_list;

/* declare a list of points */
struct list {
   point p;
   t_list * next;
};

int main() {  
  /* define 2 members in a list */     
  t_list last  = { .p = { .x = 3, .y =7 }, };               // last element
  t_list first = { .p = { .x = 4, .y =5 }, .next = &last }; // first element

  /* accessing first element  */
  printf("first.x = %d\n", first.p.x);
  printf("first.y = %d\n", first.p.y);  
  
  /* accessing next element  */
  printf("next.x = %d\n", first.next->p.x);
  printf("next.y = %d\n", first.next->p.y);  
}  
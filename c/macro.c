#include <stdio.h>

#define AVG(x,y) ((x + y)/2)

int main(void) {
   printf("AVG =  %d\n",  AVG(10, 20));  
   printf("AVG =  %lf\n", AVG(1, 1.5));  
   return 0;
}
#include <stdio.h> 

#define MY_MESSAGE "Hello!" 

int main() {
  #ifdef MY_MESSAGE 
    printf(MY_MESSAGE); 
  #endif
  return 0;
}  
#include <stdio.h>
#include <stdlib.h>
int main() {
  // dynamic array allocation  
  int *array = malloc(10 * sizeof(int));  
  // verify dynamic allocation
  if (array == NULL) {
    fprintf(stderr, "malloc failed\n");
    return(-1);
  }
  // array traversal
  int i = 0;  
  for (i = 0; i < 10; i++) {
     printf("array[%d] = %d\n", i, array[i]);           
  }   
  // remove the array from memory
  free(array);
  return(0);
}  
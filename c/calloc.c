#include <stdio.h>
#include <stdlib.h>

int main() {
  // dynamic array allocation  
  int *array = calloc(5, sizeof(int));
  if (array == NULL) {
    fprintf(stderr, "calloc failed\n");
    return(-1);
  }
  // array traversal
  int i = 0;  
  for (i = 0; i < 5; i++) {
     printf("array[%d] = %d\n", i, array[i]);           
  }  
  // resize array
  array = realloc(array, 10 * sizeof(int));
  for (i = 0; i < 10; i++) {
     printf("array[%d] = %d\n", i, array[i]);           
  }   
  // remove the array from memory
  free(array);
  return(0);
}  
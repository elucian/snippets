#include <stdio.h>
 
int main()
{
  int n, temp;
 
  printf("Enter number of elements:");
  scanf("%d", &n);

  int *array = calloc(n, sizeof(int));
  if (array == NULL) {
    fprintf(stderr, "calloc failed\n");
    return(-1);
  }
  printf("Enter %d integers...\n", n);
 
  /* read elements of array */
  for (int i = 0; i < n; i++) {
    printf("array[%d] = ",i);
    scanf("%d", &array[i]);
  }
 
  /* sort elements of array */
  int swap, i = 0;
  do {
    swap = 0;
    for (i = 0 ; i < n - 1; i++) {
      if (array[i] > array[i+1]) {
        temp       = array[i];
        array[i]   = array[i+1];
        array[i+1] = temp;
        swap       = 1;        
      } // end if
    } // end for
  } while (swap);
 
  printf("Sorted array:\n");
 
  /* array traversal */
  for (int i = 0; i < n; i++)
     printf("%d, ", array[i]);
 
  return 0;
}
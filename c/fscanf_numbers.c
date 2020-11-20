#include <stdio.h>
int main()
{

    FILE *numbers;
    numbers = fopen("somenumbers.txt", "r");

    //define a memory model for numbers
    int array[10];

    //read file into array
    int i;     
    for (i = 0; i < 10; i++)
    {
       fscanf(numbers, "%d", &array[i]);        
       printf("Number is: %d\n\n", array[i]);
    }
    return 0
}
#include <stdio.h>
#include <stdlib.h>

/* define structure person */
typedef struct {
   int id;    
   char name[20];
   int age;
} Person;

int main()
{
   Person *p;

   int i, n;
   printf("Number of persons: ");
   scanf("%d", &n);
   /* dynamic allocation */
   p = malloc(n * sizeof(Person));
   
   for(i = 0; i < n; ++i)
   {
       (p+i)->id = i+1; 
       printf("ID: %d\n", (p+i)->id);
       printf("  name:");
       scanf("%s", &(p+i)->name);
       printf("  age:");       
       scanf("%d", &(p+i)->age);
   }
   printf("\n");
   printf("List of persons:\n");
   for(i = 0; i < n; ++i)
       printf("ID: %d Name: %-20s\tAge: %d\n", (p+i)->id, (p+i)->name, (p+i)->age);
   return 0;
}
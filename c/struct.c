#include <stdio.h>
#include <string.h>

/* define structure of Book */ 
struct Project {
   char  name[50];
   char  author[50];
} foo, bar;
 
/* define a method to print Project info */ 
void PrintInfo (struct Project this){
   /* print project info */
   printf( "\n");   
   printf( "project.name: %s\n", this.name);    
   printf( "project.author: %s\n", this.author);       
}   
 
int main( ) {

   /* first project */
   strcpy( foo.name,   "Bee Language");
   strcpy( foo.author, "Elucian Moise"); 

   /* second project */
   strcpy( bar.name,   "C Language");
   strcpy( bar.author, "Dennis Ricthie");
 
   /* print project info */
   printf( "project: %s\n", foo.name);
   printf( "project: %s\n", bar.name);   

   /* call function with structure argument */
   PrintInfo(foo);
   PrintInfo(bar);

   return 0;
}
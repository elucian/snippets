#include <stdio.h>
#include <stdlib.h> 

//user defined function add() 
int add  (int a, int b) {
    return (a + b);
}   

//user defined function sub()
int sub  (int a, int b) {
    return (a - b);
}   
 
//driver function main  
int main () {
    int x = 0;
    int y = 0;
    int r = 0;
    char op;
    //begin loop
    do {
        op = '_';
        printf("CALCULATOR\n");
        printf("enter two numbers ...\n");
        printf("enter value for x:");
        scanf("%i",&x);
        printf("enter value for y:");
        scanf("%i",&y);
        printf("operation (+, -) or (.) to exit:");
        operation: // label for goto        
        op = getchar();
        switch (op) {
           case '+':  
                r = add(x,y);
           break;
           case '-':
                r = sub(x,y);
           break;
           case '.':
              printf("good buy!\n");
           break;
           default:
              if (op != '.')
                 goto operation; //read the operation again
        }
        if (op !='.') {
           printf("\n %i %c %i = %i \n",x,op,y,r);
           printf("press any key to continue...\n");
           getchar();getchar();
        }   
    } while (op != '.'); 
    //end loop
    return 0;
}
/**
Write a program that will perform some arithmetic operations (user entry) on an array using function pointers
The program will perform the user selected operation on two hard coded arrays
**/

#include <stdlib.h>
#include <string.h>

int addOp(int a, int b) { return (a + b); }
int subtractOp(int a, int b) { return ( a - b); }
int multiplyOp(int a, int b) { return ( a * b); }
int divideOp(int a, int b) { return ( a / b ); }

typedef int (*OpFuncPtr)(int, int); 

int main (){
    int running = 1;
    
    OpFuncPtr addFuncPtr = addOp;
    OpFuncPtr subtractFuncPtr = subtractOp;
    OpFuncPtr multiplyFuncPtr = multiplyOp;
    OpFuncPtr divideFuncPtr = divideOp;
    
    while (running) {
        int choice;
        
        printf("--Enter Choice--\n");
        printf("1 - Add\n");
        printf("2 - Subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("5 - Quit\n");
        scanf("%d", &choice);
        
        printf("You selected %d\n", choice);
    }
    
    return 0;
}

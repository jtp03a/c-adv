/**
Write a program that will perform some arithmetic operations (user entry) on an array using function pointers
The program will perform the user selected operation on two hard coded arrays
**/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int addOp(int a, int b) { return (a + b); }
int subtractOp(int a, int b) { return ( a - b); }
int multiplyOp(int a, int b) { return ( a * b); }
int divideOp(int a, int b) { return ( a / b ); }

typedef int (*OpFuncPtr)(int, int); 

int performOp(int *arr1, int *arr2, int size, OpFuncPtr operation);
void printResult(int *result, int size);
void resultArray(int **result, int size);

int main (){
    int running = 1;
    
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    
    OpFuncPtr commands[] = { &addOp, &subtractOp, &multiplyOp, &divideOp };
     
    while (running) {
        int choice;
        int size = 5;
        
        printf("--Enter Choice--\n");
        printf("1 - Add\n");
        printf("2 - Subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("5 - Quit\n");
        scanf("%d", &choice);
        
        if (choice == 5) {
            running = 0;
        } else {
            performOp(arr1, arr2, size, commands[choice - 1]);
        }
    }
    
    
    return 0;
}

void resultArray(int **result, int size) {
    *result = (int*)malloc(size * sizeof(int));
}

void printResult(int *result, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int performOp(int *arr1, int *arr2, int size, OpFuncPtr operation) {
    int *result = NULL;
    resultArray(&result, size);
    
    for (int i = 0; i < size; i++) {
        result[i] = operation(arr1[i], arr2[i]);
    }
    
    printResult(result, size);
}

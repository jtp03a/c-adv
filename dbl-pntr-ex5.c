/** 
Write a program that includes a function that modifies a pointer value
  not the value that the pointer is pointing to
  the actual value of the pointer - the address that the pointer is pointing to
  simulates pass by reference
  
Create a function named allocateMemory that takes a double integer pointer as a parameter
  void allocateMemory(int **ptr);
  this function should allocate memory for this pointer
Create a main function that creates an integer pointer and initialize to NULL
calls the allocateMemory func, passing in the address of the integer pointer
assign a value to the integer pointer that it is pointing to
print the value of what the pointer is pointing to
free the pointer
**/

#include <stdlib.h>
#include <stdio.h>

void allocateMemory(int **ptr) {
  *ptr = (int*)malloc(sizeof(int));
}

int main() {
  int *ptr = NULL;
  allocateMemory(&ptr);
  *ptr = 10;
  printf("%d\n", *ptr);
  free(ptr);
  return 0;
}

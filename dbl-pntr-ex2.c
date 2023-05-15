//ex1 example updated to use a double pointer so that the changing the thing that the pointer is pointing to is now reflected outside the function

#include <stdio.h>
#include <malloc.h>

void foo(int **ptr) {
  int a = 5;
  *ptr = &a; //derefence the double pointer once so we are assigning the address of a to the pointer
}

int main() {
  int *ptr = NULL;
  ptr = (int*)malloc(sizeof(int));
  
  *ptr = 10;
  
  foo(&ptr); //pass the address of the pointer to the function 
  
  printf("%d\n", *ptr); //this will output 5 now because we used a double pointer as a parameter and changed the address of the thing that the pointer was pointing to
  
  return 0;
}

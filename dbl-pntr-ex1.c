//This example shows how a single pointer passed as a argument to a function is pass by copy/value and modifying the ptr itself in the scope of the function does not change it outside the function.
//Can change the thing that the pointer is pointing to outside the scope of the function

#include <stdio.h>
#include <malloc.h>

void foo(int *ptr) {
  int a = 5;
  ptr = &a;
}

int main() {
  int *ptr = NULL;
  ptr = (int*)malloc(sizeof(int));
  
  *ptr = 10;
  
  foo(ptr);
  
  printf("%d\n", *ptr); //this will still output 5 because only the local copy of the pointer got changed inside the foo function
  
  return 0;
}

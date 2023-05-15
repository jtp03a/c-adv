/** write a program that
 1- creates a normal int variable (non pointer) and assigns it a random value
 2- creates a single integer pointer variable
 3- creates a double integer pointer variable
 4- assign the address of the normal integer variable to the single pointer
 5- assign the address of teh single pointer to the double pointer
**/

#include <stdio.h>

int main(){
  int a = 10;
  int *aPtr = NULL;
  int **aDPtr = NULL;
  aPtr = &a;
  aDPtr = &aPtr;
  
  //value of a
  printf("The value of a through the normal int var: %d\n", a);
  printf("The value of a through the single pointer: %d\n", *aPtr);
  printf("The value of a through the double pointer: %d\n", **aDPtr);
  
  //address of a
  printf("The address of a through the normal int var: %d\n", &a);
  printf("The address of a through the single pointer: %d\n", aPtr);
  printf("The address of a through the double pointer: %d\n", *aDPtr);
  
  //the value of the single pointer
  printf("The address of the single pointer through the single pointer is: %d\n", &aPtr);
  printf("The address of the single pointer through the double pointer is %d\n", aDPtr);
  
  //the address of the double pointer
  printf("The address of the double pointer is %d\n", &aDPtr);
  
  return 0;
}

//func pointers using the C library qsort function
// qsort
// first param is pointer pointing to the array to be sorted
// second param is number of elements in array
// third param is size of a single element of the array
// fourth arg is a pointer to a a function used to compare

#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b);

int main () {
  int nums[5] = { 1, 6, 4, 7, 5 };
  
  int (*fPtr)(int*, int*);
  
  fPtr = compare;
  
  qsort(nums, 5, sizeof(int), fPtr);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", nums[i]);
  }
  
  return 0;
}

int compare(int *a, int *b) {
  return (*a - *b);
}





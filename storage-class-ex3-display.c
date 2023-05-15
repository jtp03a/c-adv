#include <stdio.h>

void display() {
  extern int counter;
  printf("%d ", counter);
}

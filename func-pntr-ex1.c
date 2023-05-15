#include <stdio.h>

int somedisplay();

int main() {
  int (*funcPtr)();
  funcPtr = somedisplay;
  
  printf("\nAddress of func somedisplay is %p\n", funcPtr);
  funcPtr();
  
}

int somedisplay() {
   printf("\n---Displaying some text---\n");
   return 0;
}

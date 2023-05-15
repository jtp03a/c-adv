//this example shows another use case for using a double pointer in which you want to dynamically allocate memory for a pointer passed into a function

#include <malloc.h>
#include <string.h>

void foo(char **ptr) {
  *ptr = malloc(255);
  strcpy(*ptr, "Hello World");
}

int main() {
  char *ptr = NULL;
  foo(&ptr);
  
  printf("%s\n", ptr);
  
  free(ptr);
  return 0;
}

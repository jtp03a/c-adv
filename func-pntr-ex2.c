#include <stdio.h>

void func1(int);
void func2(int);

typedef void FuncType(int);

int main() {
  FuncType *func_ptr = NULL;
  func_ptr = func1;
  
  (*func_ptr)(100);
  
  func_ptr = func2;
  
  (*func_ptr)(200);
  
  return 0;
}

void func1(int num){
  printf("%d\n", num);
}

void func2(int num){
  printf("%d\n", num);         
}

//causes exeception from div by 0, how to handle with signal

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void handler_div_zero(int signum);

int main() {
  int result;
  int v1 = 0, v2 = 0;
  
  void (*sigHandlerReturn)(int);
  
  sigHandlerReturn = signal(SIGFPE, handler_div_zero);
  
  if (sigHandlerReturn == SIG_ERR) {
    perror("Signal Error: ");
    return 1;
  }
    
  v1 = 121;
  v2 = 0;
  result = v1/v2;
  printf("Result of Devide by Zero is %d\n", result);
  return 0;
}

void handler_div_zero(int signum) {
  if (signum == SIGFPE) {
    printf("Rx'd SIGFPE, Divide by Zero Exception\n");
    exit(0);
  } else {
    printf("Rx'd %d Signal\n", signum);
    return;
  }
}

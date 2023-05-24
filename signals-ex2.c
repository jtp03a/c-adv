#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

void signalHandler(int signalValue);

int main(){
  int i; //loop counter
  int x; //holds random values
  
  signal(SIGINT, signalHandler); //register handler
  srand(clock());
  
  //output num 1 to 100
  for (i = 1; i <= 100; i++){
    x = 1 + rand() % 50; //gen random number to raise SIGINT
    //raise SIGINT when x is 25
    if (x == 25) {
      raise(SIGINT);
    }
    printf("%4d", i);
    
    if(i % 10 == 0){
      printf("\n");
    }
    
  }
}

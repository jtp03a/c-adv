//write a program to count the number of words and characters in a file OR from standard input
//the program can take zero cmd line args or one command line arg
//if there is one arg it is the name of the file and that will be the input
//if there is no arg then stdin is to be used for input

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  int wordCount = 0;
  int charCount = 0;
  
  int ch = 0;
  
  FILE *fp = NULL;
  
  fp = fopen("data", "r");
  
  //get first char and word
  if ((ch = fgetc(fp)) !=EOF){
      wordCount++;
      charCount++;
  }
  
  //get the rest
  while ((ch = fgetc(fp)) != EOF) {
    if (isspace(ch)) {
        wordCount++;
    }
    if (ch != '\n') {
     charCount++;    
    }
  }
  
  printf("Characters in the file: %d\n", charCount);
  printf("Words in the file %d\n", wordCount);
}

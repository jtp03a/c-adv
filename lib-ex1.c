//uses the myLib static libary

/**
Commands for linux
   Create the libary
   gcc -c myLib.c -o lib_mylib.o
   ar rcs lib_mylib.a lib_mylib.o
   
   change to the main program
   gcc -I ../pathto/ -c main.c -o main.o
   link to libary
   gcc -o main main.o ../pathtolib/lib_mylib.a
**/

#include <stdio.h>
#include "myLib.h"

int main(){
   
    fun();
    
   return 0;
}

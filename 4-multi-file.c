/** Notes
  - Adv of modularization - abstraction and reussability
  teams can work on diff files
  files contain functinos in a related group
  reuse in other programs
  only need to recompile file that changed
  each specific module linked to a separate critical func of program
  
  - Header files
  *.h files
  #include "file.h" in source file
  
  - Compiling multiple files
  gcc file1.c file2.c -o programname
  In VS code
    tasks.json - list source files in the args
  
  - Designing a Large Program
  Divide program into the related functions
  header file contains definitions for each function
  source file contains implementation for each function
**/

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
  errors in different modules are separ id'd by compiler
  compiler genereates intermediate source file *.o by default
  -c cmd line option will create the *.o file
  
  - Make Files
  A utility tool used to speficty list of files and dependencies in a makefile
  auto recompiles files when nec
  if source file is newiwer than o file will recompile
  can specify source files that depened on header files
  if you change header file make auto recompile the source file
  
  example:
    SRC = mod1.c mod2.c main.c //src files
    OBJ = mod1.o mod2.o main.o //object files
    
    PROG = myProgram $(PROG):$(OBJ) //name of executable and that the exe is dep on the obj files
      gcc $(OBJ) -o $(PROG)
      
    $(OBJ):$(SRC) // obj files dep on source files
    
  - Comm between modules
  functions in sep files can comm
  func call can be made between files in normal way
  include func prototype in calling file
  
  - External Variables
  like global variabes
  uses extern keyword
  
  extern int number = 0
  
  - Static Variables
  local to a particular file
  static int number = 0 - global inside file
    
  make command will look for a MakeFile
  
  - Designing a Large Program
  Divide program into the related functions
  header file contains definitions for each function
  source file contains implementation for each function
**/

# How to C: Compiling and Executing a C program in LINUX.  

Compiling is the sequence of steps that takes a High Level Language (C) and transforms it into an pack of instructions in Low Level Language (Executable).  

The compilation of C programs can be breakdown into 4 major steps:  

1. Pre-processing  
2. Compilation  
3. Assembly  
4. Linking

To compile a C program in Linux we only need to call the GNU Compiler Collection (gcc or g++ for the friends).  

```
# For a standar compilation we use the following line: 

    gcc myCprogramm.c -o myCprogram.out

# If we want to save the files created during the compilation process we can do:

    gcc -save-temps myCprogram.c -o myCprogram.out

```


## Pre-procesing

In this initial step, the preprocessor does some initial processing  in which resolves all the lines starting with `special` characters.

* All the lines starting with `#`, known as macros or *define directives*, are resolved. In C there are two types of features: **Included header files** and **Macros**.   
* Commented code is eliminated from the file (`//`).   

The resulting file will have `*.i` for extention.

Summary: Include header files and expand macros.   

## Compilation 

During the second step, the pre-processed C program will be translated into assembly language. The file extention for the resulting file will be `*.s`.  

Summary: Generate Assembly code.  

## Assembler  

In this step the program is translated from assembly language to machine code. The output file is known as the object file `*.o`.   

Summary: Generate Machine Code.  

## Linker  

This is the last step of the compilation. In this step the instruction in the object file are re-arranged and the libraries are linked to make a final executable, the output file `*.out`.    

At the moment of linking the libraries, the instruction in the object file will be re-arranged to fill the instructions for the function called.  

Additionally, in this step the memory mapping is provided to assign a physical address during the run-time of the program. While the program will get different addresses each time is called, the mechanism provided by the linker remains the same.  

Summary: Linking of static libraries and generation of the executable file.  







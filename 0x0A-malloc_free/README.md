## Malloc and Free

### Read
 
- [0x0a - malloc & free - quick overview](https://docs.google.com/presentation/d/1awucWwPvD8BU783JVqzDXeSerU7eB504M6xRKKZndAI/edit#slide=id.p)
- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (stop at 6:50)
- [Automatic and dynamic allocation, malloc and free](https://intranet.hbtn.io/concepts/62) ("String literals and .rodata (advanced)" is not mandatory)
- man: [malloc](https://linux.die.net/man/3/malloc), [free](https://linux.die.net/man/3/free).
- You do not have to learn about calloc and realloc.

### What you should learn from this project

- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
- You are allowed to use _putchar
- You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- Don't forget to push your header file

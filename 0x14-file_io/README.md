## File I/O

### Read

- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)
- man: [open](https://linux.die.net/man/2/open), [close](https://linux.die.net/man/2/close) , [read](https://linux.die.net/man/2/read), [write](https://linux.die.net/man/2/write), [dprintf](https://linux.die.net/man/3/dprintf)

### What you should learn from this project

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use _putchar
- You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

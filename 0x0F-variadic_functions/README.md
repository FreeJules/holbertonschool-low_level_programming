## Variadic Functions

### Read

Read or watch: [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h), [C - Variable Arguments](https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm), [Functions with Variable Argument Lists in C using va_list](http://www.cprogramming.com/tutorial/c/lesson17.html), [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html), and [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8).

man: [stdarg](https://linux.die.net/man/3/stdarg)

### What you should learn from this project:

- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

### Programs:
- compiled on Ubuntu 14.04 LTS
- compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- he only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
- code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- allowed to use _putchar

### Tasks:

- 0-sum_them_all.c - returns the sum of all its parameters.
- 1-print_numbers.c - prints numbers, followed by a new line
- 2-print_strings.c - prints strings, followed by a new line
- 3-print_all.c - prints anything
- variadic_functions.h - prototypes of all your functions and the prototype of the function _putchar

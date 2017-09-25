## Sorting Algorithms

### Read

- Read [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm), [Big O notation](http://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation).
- Watch [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg), [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)

### What you should learn from this project

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, ... is totally forbidden.
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don't forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions print_array and print_list in your sort.h header file
- Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
- For almost all sorting algorithms you will have to work on, you will be asked to write a file containing the big O notation of the time complexity of the algorithm. Please use this format:

 - O(1)
 - O(n)
 - O(n!)
 - n square -> O(n^2)
 - log(n) -> O(log(n))
 - n * log(n) -> O(nlog(n))
...
- Please use the "short" notation (don't use constants). Example: O(nk) or O(wn) should be written O(n). All your answers files must have an empty line at the end.

### Tests

- Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)

### Tasks
- 0-bubble_sort.c, [Bubble-sort with Hungarian ("Csángó") folk dance](https://youtu.be/lyZQPjUT5B4), [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)

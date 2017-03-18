#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTION_H
/**
 * struct format - list of types of arguments passed to the function
 *
 * @: The operator
 * @f: The function associated
 */
typedef struct format
{
	char c;
	void (*f)();
} format_t;
void _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

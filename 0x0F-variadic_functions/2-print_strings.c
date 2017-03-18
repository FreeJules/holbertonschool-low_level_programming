#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;
	char empty[] = "(nil)";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = empty;
		if (separator == NULL || i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	va_end(list);
	printf("\n");
}

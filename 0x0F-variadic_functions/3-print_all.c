#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_char - prints char
 * @list: list of args
 * Return: none
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - prints int
 * @list: list of args
 * Return: none
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints float
 * @list: list of args
 * Return: none
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - prints string
 * @list: list of args
 * Return: none
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: arg type
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	format_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i, j;
	va_list list;
	char *ptr_sep;

	va_start(list, format);
	i = 0;
	ptr_sep = "";
	while (format && format[i] != '\0')
	{
		j = 0;
		while ((types + j)->c != '\0')
		{
			if (format[i] == (types + j)->c)
			{
				printf("%s", ptr_sep);
				(types + j)->f(list);
				break;
			}
			j++;
		}
		ptr_sep = ", ";
		i++;
	}
	va_end(list);
	printf("\n");
}

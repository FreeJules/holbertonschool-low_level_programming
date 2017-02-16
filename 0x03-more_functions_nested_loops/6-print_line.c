#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of '_' to print
 *
 *
 *
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

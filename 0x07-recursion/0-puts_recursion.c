#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: string to print
 *
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}

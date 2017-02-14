#include "holberton.h"
/**
 * print_sign - checks the sign of a number
 * @n: number to be checked
 *
 * holberton.h: created header
 *
 * Return: 1 if >0, 0 if 0, -1 if <0
**/
int print_sign(int n)
{
	int i;

	i = n;
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (i == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}

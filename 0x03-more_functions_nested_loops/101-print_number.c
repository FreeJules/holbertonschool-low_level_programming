#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int div, i, first_digit, last_digit;

	div = 100000000;
	last_digit = n % 10;
	n = (n / 10);
	first_digit = 0;
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
	i = 0;
	while (i < 9)
	{
		if (n / div != 0)
			first_digit = n / div;
		if (first_digit != 0)
			_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
		i++;
	}
	_putchar(last_digit + '0');
}

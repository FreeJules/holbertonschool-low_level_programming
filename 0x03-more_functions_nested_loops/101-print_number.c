#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int start, div, i, first_non_zero, last_digit;

	div = 100000000;
	last_digit = n % 10;
	n = (n / 10);
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
	start = n;
	i = 0;
	first_non_zero = 0;
	while (i < 9)
	{
		if (start / div != 0)
			first_non_zero = start / div;
		if (first_non_zero != 0)
			_putchar(start / div + '0');
		start = start % div;
		div = div / 10;
		i++;
	}
	_putchar(last_digit + '0');
}

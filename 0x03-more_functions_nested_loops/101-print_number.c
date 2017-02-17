#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int div, first_non_zero, last_digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	div = 100000000;
	last_digit = n % 10;
	n = (n / 10);
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
	first_non_zero = 0;
	while (div >= 1)
	{
		if (n / div != 0)
			first_non_zero = n / div;
		if (first_non_zero != 0)
			_putchar(n / div + '0');
		n = n % div;
		div /= 10;
	}
	_putchar(last_digit + '0');
}

#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int div, first_non_zero, last_digit, tmp, lenght;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('-');
		last_digit = last_digit * (-1);
	}
	n = (n / 10);
	if (n < 0)
	{
		n = n * (-1);
	}
	lenght  = 0;
	div = 1;
	tmp = n;
	while (tmp > 0)
	{
		lenght += 1;
		div *= 10;
		tmp = tmp / 10;
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

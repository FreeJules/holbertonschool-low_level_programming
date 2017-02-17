#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int last_digit, tmp, lenght, div, i, j;

	last_digit = n % 10;
	n = (n / 10);
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
/* calculating lenght of new n */
	tmp = n;
	lenght = 0;
	while (tmp > 0)
	{
		lenght += 1;
		tmp = tmp / 10;
	}
/* creating exponent for base 10 to divide with
 * which will be one less than lenght so that we don't get 0 when we divide
 */
	div = 1;
	for (i = 0; i < lenght - 1; i++)
		div *= 10;
/* printing number now that we have lenght and div */
	j = 0;
	while (j < lenght)
	{
		_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
		j++;
	}
/* print last digit */
	_putchar(last_digit + '0');
}

#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int nl, lenght, j, div;
	int i, last_digit;

/* calculating last digit and dividing n by 10 to be able to
 * change negative to positive without getting out of range
 */
	last_digit = n % 10;
	n = (n / 10);
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
/* calculating lenght of new n */
	nl = n;
	lenght = 0;
	while (nl > 0)
	{
		lenght += 1;
		nl = nl / 10;
	}
/* creating exponent for base 10 to divide with
 * which will be one less than lenght so that we don't get 0 when we divide
 */
	div = 1;
	for (j = 0; j < lenght - 1; j++)
		div *= 10;
/* printing number now that we have lenght and div */
	i = 0;
	while (i < lenght)
	{
		_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
		i++;
	}
/* print last digit (this covers 0 too)*/
	_putchar(last_digit + '0');
}

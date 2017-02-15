#include "holberton.h"
/**
 * print_times_table - prints times table of given size
 * @n: table size has to be 0 to 15
 *
 * holberton.h: created header
 *
 * Return: none
**/
void print_times_table(int n)
{
	int i, j, k, d, m;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			d = k / 10;
			m = k % 10;
			if (k < 1000 && j != 0)
				_putchar(' ');
			if (k < 100 && j != 0)
				_putchar(' ');
			if (k < 10 && j != 0)
				_putchar(' ');
			if (k >= 100)
			{
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
				_putchar(m + '0');
			}
			if (k >= 10 && k < 100)
			{
				_putchar(d + '0');
				_putchar(m + '0');
			}
			if (k < 10)
				_putchar(k + '0');
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

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
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		k = 0;
		while (j <= n)
		{
			if (k < 1000 && j != 0)
				_putchar(' ');
			if (k < 100 && j != 0)
				_putchar(' ');
			if (k < 10 && j != 0)
				_putchar(' ');
			if (k >= 100)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10) % 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (k >= 10 && k < 100)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (k < 10)
				_putchar(k + '0');
			if (j != n)
				_putchar(',');
			k = k + i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}

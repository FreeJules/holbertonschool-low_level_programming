#include "holberton.h"
/**
 * times_table - prints times table
 * @void: no parameters
 *
 * holberton.h: created header
 *
 * Return: none
**/
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		k = 0;
		while (j < 10)
		{
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			k = k + i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}

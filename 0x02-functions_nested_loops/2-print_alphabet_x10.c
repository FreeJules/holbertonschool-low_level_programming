#include "holberton.h"
/**
 * print_alphabet_x10 - printing alphabet 10 tmes
 * @void:void
 *
 * Description: prints alphabet 10 times using _putchar
 * holberton.h: created header
 * Return: none
**/
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	_putchar('\n');
	}
}

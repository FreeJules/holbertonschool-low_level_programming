#include "holberton.h"
/**
 * print_alphabet - printing alphabet
 * @void:void
 *
 * Description: prints alphabet using _putchar
 * holberton.h: created header
 * Return: none
**/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

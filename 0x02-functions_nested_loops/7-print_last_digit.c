#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to be checked
 *
 * holberton.h: created header
 *
 * Return: always 0 (success)
**/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = n * (-1);
	else
		i = n;
	_putchar(i % 10 + '0');
	return (i % 10);
}

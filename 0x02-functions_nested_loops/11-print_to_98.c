#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: starting number
 *
 * holberton.h: created header
 *
 * Return: none
**/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	if (n == 98 || i == 98)
		printf("98\n");
}

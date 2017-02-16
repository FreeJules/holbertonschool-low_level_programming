#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: number of '#' to print in row and column
 *
 *
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= size - i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

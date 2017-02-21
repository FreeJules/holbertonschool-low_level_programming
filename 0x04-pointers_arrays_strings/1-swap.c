#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 *
 * Return: none
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

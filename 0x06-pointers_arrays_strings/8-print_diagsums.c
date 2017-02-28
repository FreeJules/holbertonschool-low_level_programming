#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a sq  matrix of ints.
 * @a: pointer to 2D array
 * @size: size of matrix
 *
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + size * i + i);
		sum2 += *(a + size * i + size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}

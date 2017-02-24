#include "holberton.h"
/**
 * reverse_array - reverses array of ints
 * @a: array of ints
 * @n: number of elements
 *
 * Return: none
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i <= j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

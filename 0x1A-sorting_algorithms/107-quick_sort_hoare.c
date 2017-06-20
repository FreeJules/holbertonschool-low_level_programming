#include "sort.h"
/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 * the Quick sort algorithm using Hoare's partition scheme
 * @array: array to sort
 * @size: size of the array
 * Return: none
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort_hoare(array, 0, size - 1, size);
}
/**
 * quickSort_hoare - Quick sort algorithm
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the @a
 * Return: none
 */
void quickSort_hoare(int *a, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = partition_hoare(a, l, h, size);
		quickSort_hoare(a, l, p, size);
		quickSort_hoare(a, p + 1, h, size);
	}
}
/**
 * partition_hoare - Hoare partition scheme
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the @a
 * Return: none
 */
int partition_hoare(int *a, int l, int h, size_t size)
{
	int pivot, i, j, tmp;

	pivot = a[l];
	i = l - 1;
	j = h + 1;

	while (1)
	{
		do
			i += 1;
		while (a[i] < pivot);
		do
			j -= 1;
		while (a[j] > pivot);
		if (i >= j)
			return (j);
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		print_array(a, size);
	}
}

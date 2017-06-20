#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: none
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
/**
 * quickSort - Quick sort algorithm
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the @a
 * Return: none
 */
void quickSort(int *a, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = partition(a, l, h, size);
		quickSort(a, l, p - 1, size);
		quickSort(a, p + 1, h, size);
	}
}
/**
 * partition - Lomuto partition scheme
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the @a
 * Return: none
 */
int partition(int *a, int l, int h, size_t size)
{
	int pivot, i, j, tmp;

	pivot = a[h];
	i = l - 1;

	for (j = l; j <= h; j++)
	{
		if (a[j] <= pivot)
		{
			i += 1;
			if (i != j)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				print_array(a, size);
			}
		}
	}
	return (i);
}

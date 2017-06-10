#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: array to sort
 * @size: array size
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}
		if (k != i)
		{
			tmp = array[k];
			array[k] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

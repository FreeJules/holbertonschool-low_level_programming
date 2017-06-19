#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, new_size;
	int tmp;

	if (!array || size < 2)
		return;
	for (new_size = size - 1; new_size != 0; new_size--)
	{
		for (i = 0; i < new_size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

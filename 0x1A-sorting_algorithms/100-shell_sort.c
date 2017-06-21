#include "sort.h"

/**
 * shell_sort - shell sort algorithm implementation
 * @array: the array
 * @size: the size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int i, j;
	long temp;
	int h = 1;

	int nElems = size;

	while (h <= nElems / 3)
	{
		h = h * 3 + 1;
	}
	while (h > 0)
	{
		if (h == 1)
			print_array(array, size);
		for (i = h; i < nElems; i++)
		{
			temp = array[i];
			j = i;
			while (j > h - 1 && array[j - h] >= temp)
			{
				array[j] = array[j - h];
				j -= h;
			}
			array[j] = temp;
		}
		h = (h - 1) / 3;
	}
	print_array(array, size);
}

#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of element != 0; -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}

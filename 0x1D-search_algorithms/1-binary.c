#include "search_algos.h"
/**
 * print_array - prints array
 * @array: pointer to the first element of the array to print
 * @start: 1st index in array
 * @end: last index in array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (!array)
		return;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i == end)
			printf("\n");
		else
			printf(", ");
	}
}
/**
 * binary_search_rec - binary search recursion
 * @array: pointer to the first element of the array to search in
 * @start: 1st index in subarray
 * @end: last index in subarray
 * @value: value to search for
 * Return: first index where value is located, -1 if not found
 */
int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (end >= start)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		/* base case: value is the middle element */
		if (array[mid] == value)
			return (mid);
		/* value is in left half of array */
		if (array[mid] > value)
			return (binary_search_rec(array, start, mid, value));
		/* value is in right half of array */
		return (binary_search_rec(array, mid + 1, end, value));
	}
	return (-1);
}
/**
 * binary_search - searches for a value in an array, using the Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, -1 if not found or array NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_rec(array, 0, size - 1, value));
}

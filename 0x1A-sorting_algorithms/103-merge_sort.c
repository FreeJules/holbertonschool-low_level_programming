#include "sort.h"
/**
 * merge_sort - merge sort
 * @array: array to sort
 * @size: size of the array
 * Return: none
 */
void merge_sort(int *array, size_t size)
{
	int *barray;

	barray = malloc(sizeof(int) * size);
	if (barray == NULL)
		return;
	sort(array, 0, size - 1, barray);
}
/**
 * merging - merges
 * @a: array to sort
 * @low: lower bound index
 * @mid: middle index
 * @high: last index
 * @b: new array
 * Return: none
 */
void merging(int *a, int low, int mid, int high, int *b)
{
	int l1, l2, i;

	l1 = low;
	l2 = mid + 1;
	i = low;

	while (l1 <= mid && l2 <= high)
	{
		if (a[l1] <= a[l2])
		{
			b[i] = a[l1++];
			i = i + 1;
		}
		else
		{
			b[i] = a[l2++];
			i = i + 1;
		}
	}
	while (l1 <= mid)
	{
		b[i] = a[l1++];
		i = i + 1;
	}
	while (l2 <= high)
	{
		b[i] = a[l2++];
		i = i + 1;
	}
	for (i = low; i <= high; i++)
        {
                a[i] = b[i];
        }
	printf("Merging...\n[left]: ");
	for (i = low; i <= mid; i++)
	{
		if (i != mid)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
	printf("[right]: ");
	for (i = mid + 1; i <= high; i++)
	{
		if (i != high)
			printf("%d ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
	printf("[Done] ");
	for (i = low; i <= high; i++)
	{
		printf("%d", a[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
/**
 * sort - breakes it down into smaller arrays
 * @a: array to sort
 * @low: lower bound index
 * @high: last index
 * @b: new array
 * Return: none
 */
void sort(int *a, int low, int high, int *b)
{
	int mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		sort(a, low, mid, b);
		sort(a, mid + 1, high, b);
		merging(a, low, mid, high, b);
	}
	else
		return;
}

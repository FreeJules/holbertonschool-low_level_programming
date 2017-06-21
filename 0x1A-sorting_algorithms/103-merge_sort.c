#include "sort.h"

void merge_sort(int *array, size_t size)
{
	int *barray;

	barray = malloc(sizeof(int) * size);
	if (barray == NULL)
		return;
	sort(array, 0, size-1, barray);
}

void merging(int *a, int low, int mid, int high, int *b) {
	int l1, l2, i, cl, cr;
	int *leftarr, *rightarr;

	l1 = low;
	l2 = mid + 1;
	i = low;
	cl = 0;
	cr = 0;

	leftarr = malloc(sizeof(int) * high);
	rightarr = malloc(sizeof(int) * high);
	while(l1 <= mid && l2 <= high)
	{
		if(a[l1] <= a[l2])
		{
			b[i] = a[l1++];
			leftarr[cl] = b[i];
			cl = cl + 1;
			i = i + 1;
		}
		else
		{
			b[i] = a[l2++];
			rightarr[cr] = b[i];
			i = i + 1;
			cr = cr + 1;
		}
	}
	while(l1 <= mid)
	{
		b[i] = a[l1++];
		leftarr[cl] = b[i];
		cl = cl + 1;
		i = i + 1;
	}
	while(l2 <= high)
	{
		b[i] = a[l2++];
		rightarr[cr] = b[i];
		cr = cr + 1;
		i = i + 1;
	}
	printf("Merging...\n[left]: ");
	for(i = 0; i < cl; i++)
	{
		if (i != cl - 1)
			printf("%d ", leftarr[i]);
	}
	printf("\n");
	printf("[right]: ");
        for(i = 0; i < cr; i++)
	{
		if (i != cr - 1)
			printf("%d ", rightarr[i]);
        }
        printf("\n");
	printf("[Done] ");
	for(i = low; i <= high; i++)
	{
		a[i] = b[i];
		printf("%d ", a[i]);
	}
	printf("\n");
}
void sort(int *a, int low, int high, int *b) {
	int mid;

	if(low < high) {
		mid = (low + high) / 2;
		sort(a, low, mid, b);
		sort(a, mid+1, high, b);
		merging(a, low, mid, high, b);
	} else {
		return;
	}
}

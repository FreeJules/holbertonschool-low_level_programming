#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:number of elements
 * @size: size of elements
 *
 * Return: none
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}

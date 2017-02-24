#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: n most bytes of a string
 *
 * Return: pointer to resulting string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

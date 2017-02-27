#include "holberton.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: number of bytes
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (count != i + 1)
			return (count);
	}
	return (0);
}

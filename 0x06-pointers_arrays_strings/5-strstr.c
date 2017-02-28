#include "holberton.h"
/**
 * _strstr - finds substring
 * @haystack: pointer to string to search
 * @needle: pointer to a string to search for
 *
 * Return: pointer to where substring begins, or NULL
 * if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = 0;
	while (haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (needle[j] == haystack[i])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (haystack + start);
			if (haystack[i] == '\0')
				return (haystack + i);
		}
		i = start + 1;
	}
	return ('\0');
}

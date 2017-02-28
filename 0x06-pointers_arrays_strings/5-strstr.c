#include "holberton.h"
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * _compare - compares 2 strings
 * @haystack: string 1
 * @needle: string 2
 * @i: starting at char i for haystack
 *
 * Return: 0 if the same
 */
int _compare(char *haystack, char *needle, int i)
{
	int j;

	j = 0;
	while (needle[j] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (0);
		}
		else
			break;
	}
	return (1);
}
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
	int i, match;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] != needle[0] && needle[0] != '\0')
			i++;
		else
		{
			match = _compare(haystack, needle, i);
			if (match != 0)
				i++;
			else
				return (haystack + i);
		}
	}
	return ('\0');
}

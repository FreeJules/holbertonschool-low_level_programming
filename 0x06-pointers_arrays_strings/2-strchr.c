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
 * _strchr - locates a character in a string
 * @s: string s
 * @c: character to search for
 *
 * Return: pointer to first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int len, i;

	len = _strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	return (s + i);
}

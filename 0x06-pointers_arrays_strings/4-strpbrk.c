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
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string accept to search for in s
 *
 * Return: Returns pointer to the byte in s that matches one in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (s + i);
}

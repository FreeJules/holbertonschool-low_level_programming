#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 * _strncat - appends the src string to the dest string, using most n bytes
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: most n bytes
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = _strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}
/**
 * string_nconcat - that concatenates two strings, n is greater or equal to the
 *                  length of s2 then use the entire string s2
 * @s1: string 1
 * @s2: string s2
 * @n: bytes of s2
 *
 * Return: pointer that point to a newly allocated space in memory, which
 *  contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int len_s1;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = _strlen(s1);
	new_str = malloc((len_s1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	new_str = _strncat(new_str, s1, len_s1);
	if (_strlen(s2) == 0)
		*(new_str + len_s1) = '\0';
	else
		_strncat((new_str + len_s1), s2, n);
	return (new_str);
}

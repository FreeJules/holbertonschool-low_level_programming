#include "holberton.h"
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(const char *s)
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
 * _strcpy - copies the string with \0 to the buffer
 * @dest: pointer to dest
 * @src: pointer to string
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/**
 * _strcat - appends the src string to the dest string
 * @dest: pointer to dest string
 * @src: pointer to src string
 *
 * Return: pointer to resulting string dest
 *
 */
char *_strcat(char *dest, const char *src)
{
	int i, length;

	length = _strlen(dest);

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 *
 * Return: difference in value of first char that's different
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i, dif;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
		i++;
	}
	if (s1[i] == s2[i] && s1[i] == '\0')
		dif = 0;
	return (dif);
}

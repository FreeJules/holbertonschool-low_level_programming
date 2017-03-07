#include "holberton.h"
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
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to new string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * (_strlen(str) + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}

#include "holberton.h"
#include <stdlib.h>
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

	new_str = malloc(sizeof(str));
	if (new_str == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}

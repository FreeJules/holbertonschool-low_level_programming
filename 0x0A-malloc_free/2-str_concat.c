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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string or NULL on failiure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int length, i, j, l1, l2;

	if (s1 != NULL)
		l1 = _strlen(s1);
	else
		l1 = 0;
	if (s2 != NULL)
		l2 = _strlen(s2);
	else
		l2 = 0;
	length = l1 + l2 + 1;
	i = 0;
	j = 0;
	new_str = malloc(sizeof(char) * length);
	if (l1 != 0)
		for (i = 0; s1[i] != '\0'; i++)
			new_str[i] = s1[i];
	if (l2 != 0)
		for (j = 0; s2[j] != '\0'; i++, j++)
			new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}

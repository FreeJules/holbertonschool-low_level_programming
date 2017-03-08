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
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: arguments
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len, total_len;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		total_len += len + 1;
	}
	new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}

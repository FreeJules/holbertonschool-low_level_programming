#include "holberton.h"
/**
 * _const_strlen - returns the lenght of a string
 * @s: pointer to s
 * Return: 0 on success
 */
int _const_strlen(const char *s)
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
 * _strncmp - compares two strings for n amount of chars
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * @n: number of chars to compare
 * Return: 0 if identical
 *
 */
int _strncmp(const char *s1, const char *s2, int n)
{
	int i, dif;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (-1);
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
		i++;
	}
	return (0);
}
/**
 * _getenv - gets an environment variable. (without using getenv)
 * @name: environment variable name
 * Return: pointer to a string with that env variable
 */
char *_getenv(const char *name)
{
        extern char **environ;
        char **p;

	for (p = environ; *p; p++)
	{
		if (_strncmp(*p, name, _const_strlen(name)) == 0)
		{
			printf ("%s\n", *p);
			return (*p);
		}
	}
	return (NULL);
}

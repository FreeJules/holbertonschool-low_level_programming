#include "holberton.h"
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

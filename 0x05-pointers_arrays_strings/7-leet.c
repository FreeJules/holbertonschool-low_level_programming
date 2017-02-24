#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: new string
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
				s[i] = d[j];
			j++;
		}
		i++;
	}
	return (s);
}

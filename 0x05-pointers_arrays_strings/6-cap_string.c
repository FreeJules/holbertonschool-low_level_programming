#include "holberton.h"
/**
 * cap-string - capitalizes all words of a string
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == c[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
			j++;
		}
		i++;
	}
	return (s);
}

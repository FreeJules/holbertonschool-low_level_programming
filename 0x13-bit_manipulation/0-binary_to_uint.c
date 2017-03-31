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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 *  string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i, len, pow_of_2;

	len = _strlen(b);
	number = 0;
	pow_of_2 = 1;
	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			number += 0;
		if (b[i] == '1')
			number += pow_of_2;
		pow_of_2 *= 2;
	}
	return (number);
}

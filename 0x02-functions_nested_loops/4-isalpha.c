#include "holberton.h"
/**
 * _isalpha - checks if it's a letter
 * @c: number to be checked
 *
 * holberton.h: created header
 *
 * Return: 1 if it is letter, 0 otherwise
**/
int _isalpha(int c)
{
	int i;

	i = c;
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);
}

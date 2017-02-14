#include "holberton.h"
/**
 * _islower - checks for lower case character
 * @c: number to be checked
 *
 * holberton.h: created header
 *
 * Return: 1 if it is lower case, 0 otherwise
**/
int _islower(int c)
{
	int i;

	i = c;
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}

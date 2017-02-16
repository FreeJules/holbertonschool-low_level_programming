#include "holberton.h"

/**
 * _isdigit - checks if char is a digit
 * @c: char to be cheked
 *
 *
 *
 * Return: 1 if upper, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "holberton.h"
/**
 * _abs - computes absolute value
 * @n: number to be checked
 *
 * holberton.h: created header
 *
 * Return: value
**/
int _abs(int n)
{
	if (n <  0)
	{
		return (n * (-1));
	}
	else
		return (n);
}

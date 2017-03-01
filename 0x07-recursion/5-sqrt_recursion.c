#include "holberton.h"
#include <stdio.h>
/**
 * _sqr - square of n
 * @n: number to match
 * @i: number to square
 *
 * Return: i
 */
int _sqr(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i != n)
		return (_sqr(n, i + 1));
	else
		return (i);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqr rt for
 *
 * Return: result or -1 if doesn't exsist
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}

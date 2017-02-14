#include "holberton.h"
/**
 * add - adds two integers
 * @a: first number
 * @b: secon number
 *
 * holberton.h: created header
 *
 * Return: result
**/
int add(int a, int b)
{
	int sum;

	sum = a + b;
	if ((sum < 0 && a > 0 && b > 0) || (sum > 0 && a < 0 && b < 0))
	{
		return (-1);
	}
	else
	{
		return (sum);
	}
}

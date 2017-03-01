#include "holberton.h"
#include "holberton.h"
#include <stdio.h>

/**
 * _prime - is it prime
 * @n: number to check
 * @i: multiplier
 *
 * Return: 1 if it is, 0 otherwise
 */
int _prime(int n, int i)
{
	if (n == 1 || n < 0)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (_prime(n, i + 1));
}
/**
 * is_prime_number - checks if input integer is a prime number
 * @n: chec if n is prime
 *
 * Return: 1 if it is 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

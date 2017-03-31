#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *  one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;

	count = 0;
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (((n >> i) & 1) ^ ((m >> i) & 1))
			count++;
	}
	return (count);
}

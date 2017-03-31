#include "holberton.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned int *p;

	p = (unsigned int *)&i;
	if (*p == 1)
		return (1);
	if (*(p + (sizeof(unsigned int) - 1)) == 1)
		return (0);
	return (-1);
}

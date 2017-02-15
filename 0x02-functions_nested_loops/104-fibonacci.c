#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers, followed by a newline
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, n;

	i = 1;
	j = 2;
	n = 2;
	while (n <= 98)
	{
		printf("%lu, %lu", i, j);
		if (n != 98)
			printf(", ");
		i = i + j;
		j = j + i;
		n += 2;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - print sum of even Fibonacci numbers not exceeding 4mm
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, j, sum;

	i = 1;
	j = 2;
	sum = 0;
	while (i <= 4000000 || j <= 4000000)
	{
		if (i % 2 == 0)
			sum = sum + i;
		if (j % 2 == 0)
			sum = sum + j;
		i = i + j;
		j = j + i;
	}
	printf("%ld\n", sum);
}

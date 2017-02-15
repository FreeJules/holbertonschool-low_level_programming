#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, j, n;

	i = 1;
	j = 2;
	n = 2;
	while (n <= 50)
	{
		printf("%lu, %lu", i, j);
		if (n != 50)
			printf(", ");
		i = i + j;
		j = j + i;
		n += 2;
	}
	printf("\n");
}

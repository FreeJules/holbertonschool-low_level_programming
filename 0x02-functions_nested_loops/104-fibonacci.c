#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers, followed by a newline
 * it prints only till 92 and then you ahv to manually append last 2 digits
 *  because it gets out of range
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, j, n;
	unsigned long i1, j1, n1, i2, j2, n2;
	int c;

	i = 1;
	j = 2;
	n = 2;
	while (n <= 90)
	{
		printf("%lu, %lu, ", i, j);
		i = i + j;
		j = j + i;
		n += 2;
	}
	printf("%lu, %lu, ", i, j);
	c = 1;
	i1 = i / 100;
	j1 = j / 100;
	i2 = i % 100;
	j2 = j % 100;
	while (c <= 6)
	{
		n1 = i1 + j1;
		n2 = i2 + j2;
		if (n2 > 100)
		{
			n2 = n2 % 100;
			n1 = n1 + 1;
			printf("%lu%lu", n1, n2);
		}
		else
			printf("%lu%lu", n1, n2);
		if (c != 6)
			printf(", ");
		i1 = j1;
		j1 = n1;
		i2 = j2;
		j2 = n2;
		c++;
	}
	printf("\n");
	return (0);
}

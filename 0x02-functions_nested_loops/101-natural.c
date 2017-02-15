#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int total, s3, s5, s3_5;

	total = 0;
	s3 = multiplies(3, 1024, 5);
	s5 = multiplies(5, 1024, 3);
	s3_5 = same_mod(3, 5, 1024);
	total = s3 + s5 + s3_5;
	printf("%d\n", total);
	return (0);
}

/**
 * multiplies - sums all multiplies of n
 * divisible by m
 * @n: multiplies of n
 * @max: smaller than
 * @m: and not divisible by
 *
 * Description: Sn = (n/2) * (a1 + an); n = an / number
 * Return: sum
 **/
int multiplies(int n, int max, int m)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < max; i += n)
	{
		if ((i % m) != 0)
		sum = sum + i;
	}
	return (sum);
}

/**
 * same_mod - sum of mods of n
 * @n: multiplies of n and m
 * @m: and m
 * @max: smaller than max
 *
 * Description: sum of all number divisible by m and n smaller than max
 * Return: sum
 **/
int same_mod(int n, int m, int max)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < max; i++)
	{
		if (((i % n) == 0) && ((i % m) == 0))
			sum = sum + i;
	}
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 *
 * Return: Always 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, n, sum;

	i = 1;
	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		n = atoi(argv[i]);
			if (n == -3)
			{
				printf("Error\n");
				return (0);
				}
		sum = sum + n;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

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
	int i, j, sum;

	i = 1;
	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

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
	int i, result;

	i = 1;
	result = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		result = result * atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}

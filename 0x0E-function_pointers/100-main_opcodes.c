#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of args
 * @argv: pointers to string args
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n  = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i != (n - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

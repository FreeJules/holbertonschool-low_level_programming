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
	(char *)ptr;

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
	ptr = (char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%x", (ptr[i] & 0xff);
		if (i != (n - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

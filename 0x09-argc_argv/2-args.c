#include <stdio.h>

/**
 * main - prints all of its args including 1st
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints number of args
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	int i;

	i = 0;
	while (argc--)
		i++;
	printf("%d\n", i - 1);
	return (0);
}

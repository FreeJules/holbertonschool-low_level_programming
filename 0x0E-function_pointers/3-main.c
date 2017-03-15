#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of args
 * @argv: args
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

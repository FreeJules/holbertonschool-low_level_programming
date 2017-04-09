#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	extern char **environ;
	char **p;
	for (p = environ; *p; p++) {
		printf ("%s\n", *p);
	}
	return (0);
}

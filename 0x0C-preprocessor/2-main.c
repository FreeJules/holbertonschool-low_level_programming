#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from, followed by a \n
 *
 * Return: Always 0.
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}

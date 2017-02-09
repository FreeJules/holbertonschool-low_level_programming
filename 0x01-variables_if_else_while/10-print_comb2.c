#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar(10 + '0');
	for (i = 0; i < 100; i++)
	{
		if (i < 10)
			putchar(0 + '0');
		putchar(i + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

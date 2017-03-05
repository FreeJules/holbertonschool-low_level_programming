#include <stdio.h>
#include <stdlib.h>
/**
 * _if_not_number - returns first int in a string acounting for + and -
 * @s: string to check
 *
 * Return: integer
 */
int _if_not_number(char *s)
{
	int number = 0;
	int minus = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			minus++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			if (number > 0)
				number = number * 10 + (*(s + i) - '0');
			else
				number = *(s + i) - '0';
		}
		if (number != 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;
		i++;
	}
	if (number == 0)
		return (-1);
	if (minus % 2 == 0)
		return (number);
	else
		return (number * (-1));
}
/**
 * _atoi - prints a string, followed by a new line
 * @s: pointer to string to print
 *
 * Return: none
 *
 */
int _atoi(char *s)
{
	int i, number, next;
	char _1st, _2nd;

	number = 0;
	_1st = *(s + 0);
	_2nd = *(s + 1);
	if (*s != '\0')
	{
		if (_1st == '-' && (_2nd >= '0' && _2nd <= '9'))
		{
			number = (number + (_2nd - '0')) * (-1);
			i = 2;
			while (*(s + i) != '\0')
			{
				next = *(s + i) - '0';
				number = number * 10 - next;
				i++;
			}
		}
		if (_1st >= '0' && _1st <= '9')
		{
			number = number + (_1st - '0');
			i = 1;
			while (*(s + i) != '\0')
			{
				next = *(s + i) - '0';
				number = number * 10 + next;
				i++;
			}
		}
		if ((_1st < '0' || _1st > '9') && (_2nd < '0' || _2nd > '9'))
			number = _if_not_number(s);
	}
	return (number);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 *
 * Return: Always 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, n, sum;

	i = 1;
	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		n = _atoi(argv[i]);
			if (n == -1)
			{
				printf("Error\n");
				return (0);
				}
		sum = sum + n;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

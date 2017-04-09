#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define BUFF_SIZE 1024
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * _strprint - prints a string
 * @str: pointer to string to print
 * Return: none
 */
void _strprint(char *str)
{
        write(1, str, _strlen(str));
}
/**
 * _getline - prints "$ ", wait for the user to enter a command, prints it on the next line
 * @input: pointer to buffer to store input
 * @size: size of a buffer
 * Return: chars read
 */
int _getline(char *input, int size)
{
	int i;
	char start[2] = "$ ";

	write (STDOUT_FILENO, start, 2);
	for (i = 0; i < size - 1; i++)
	{
		read(STDIN_FILENO, (input + i), 1);
		if (input[i] == '\n')
			break;
	}
	i++;
	input[i] ='\0';
	_strprint(input);
	return(i);
}
#include <stdio.h>
#include <unistd.h>

/**
 * main - calls _getline
 *
 * Return: returns number of characters read
 */
int main(void)
{
	char *input;
	unsigned int chars_read;
	char end[5] = "exit\n";

	input = malloc(sizeof(char) * BUFF_SIZE);
	if (input == NULL)
		return (1);
	while (1)
	{
		if (strncmp(input, end, 4) == 0 && (strlen(end) == strlen(input)))
			break;
		printf("end: %lu, input %lu\n", strlen(end), strlen(input));
		chars_read = _getline(input, BUFF_SIZE);
	}
	return (chars_read);
}

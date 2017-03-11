#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
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
 * check_input - checks if any characters are not digits
 * @s: pointer to s
 *
 * Return: 0 if they are all digits, 1 otherwise
 *
 */
int check_input(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = 0; i < len; i++)
		if (s[i] < '0' || s[i] > '9')
			return (1);
	return (0);
}
/**
 * print_it - prints string
 * @s: pointer to s
 *
 * Return: none
 */
void print_it(char *s)
{
	int i, l;

	l = _strlen(s);
	for (i = 0; i < l; i++)
		_putchar(s[i]);
	_putchar('\n');
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:number of elements
 * @size: size of elements
 *
 * Return: none
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: none
 *
 */
void rev_string(char *s)
{
	int i, count;
	char swap;

	if (*s != '\0')
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			count++;
		}
		i = 0;
		count = count - 1;
		while (i <= count)
		{
			swap = *(s + i);     /* swap = first */
			*(s + i) = *(s + count); /* first = last */
			*(s + count) = swap; /* last = swap (first) */
			i++;
			count--;
		}
	}
}
/**
 * _carry - set r[j] and return carry
 * @l1: length of n1
 * @l2: length of n2
 * @n1: string n1
 * @n2: string n2
 * @r: buffer for new string
 * @j: index for buffer
 * @carry: carry
 *
 * Return: carry
 */
int _carry(int l1, int l2, char *n1, char *n2, char *r, int j, int carry)
{
	int sum, d1, d2;

	sum = 0;
	if (l1 >= 0)
		d1 = n1[l1] - '0';
	else
		d1 = 0;
	if (l2 >= 0)
		d2 = n2[l2] - '0';
	else
		d2 = 0;
	sum = d1 + d2 + carry;
	if (sum >= 10)
	{
		r[j] = sum % 10 + '0';
		carry = 1;
	}
	else
	{
		r[j] = sum + '0';
		carry = 0;
	}
	return (carry);
}
/**
 * infinite_add - adds two numbers
 * @n1: string with number 1
 * @n2: string with number 2
 * @r: buffer for new string of sum of n1 and n2
 * @size_r: size of a buffer
 *
 * Return: pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, j;
	int carry;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	if (l1 > size_r - 1 || l2 > size_r - 1)
		return (0);
	carry = 0;
	j = 0;
	l1--;
	l2--;
	while (l1 >= 0 || l2 >= 0)
	{
		carry = _carry(l1, l2, n1, n2, r, j, carry);
		l1--;
		l2--;
		j++;
	}
	if (carry == 1)
	{
		r[j] = carry + '0';
		r[j + 1] = '\0';
		if (_strlen(r) + 1 > size_r) /* _strlen(r) + '\0' */
			return (0);
	}
	else
		r[j] = '\0';
	rev_string(r);
	return (r);
}
/**
 * mult_by_ld - multiply string/number by last digit of another string/number
 * @buffer: pointer to store result of multiplication
 * @ld_n1: last digit of string 1/number 1
 * @n2: string 2/ number 2
 * @len_n2: length of string 2/number 2
 * @k: how many zeros to add in the begining (power of 10)
 *
 * Return: pointer to buffer
 */
char *mult_by_ld(char *buffer, char ld_n1, char *n2, int len_n2, int k)
{
	int i, j, carry;

	carry = 0;
	for (i = len_n2 - 1, j = 0; i>= 0; i--, j++)
	{
		while(k >= 0)
		{
			buffer[j] = 0;
			k--;
			j++;
		}
		buffer[j] = (n2[i] * ld_n1 + carry) % 10;
		carry = (n2[i] * ld_n1) / 10;
	}
	return (buffer);
}
/**
 * mul - multiply two positive numbers
 * @argc: number of args
 * @argv: args
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	char error[6] = "Error";
	int input1, input2, len1, len2, len;
	char *result, *n1, *n2;
	int i, j, k;

	/* if the number of argument is incorrect, print Error, followed by
	   a new line, and exit with a status of 98 */
	if (argc != 3)
	{
		print_it(error);
		exit(98);
	}

	/* if num1 of num2 should only be composed of digits. If not, print
	   Error, followed by a new line, and exit with a status of 98*/
	input1 = check_input(argv[1]);
	input2 = check_input(argv[2]);
	if (input1 != 0 || input2 != 0)
	{
		print_it(error);
		exit (98);
	}

	/* reserving memory space for result, +1 in case there is carry,
	   1 for '\n' */
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len = len1 + 1 + len2 + 1;

	n1 = _calloc(len, sizeof(char));
	n2  = _calloc(len, sizeof(char));
	result = _calloc(len, sizeof(char));

	for (i = len1 - 1; i >= 0; i--, k++)
	{
		k = 0;
		for (j = len1 - 1; j > i; j--)
			k++;
		n2 = mult_by_ld(n2 + k, argv[1][i], argv[2], len2, k);
		rev_string(n2);
		n1 = result;
		print_it(result);
		result = infinite_add(n1, n2, result, len * sizeof(char));
		print_it(result);
	}
	print_it(result);
	return (0);
}

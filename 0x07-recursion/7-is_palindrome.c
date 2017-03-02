#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
/**
 * _palindrome_check - check if it's palindrom
 * @s: string
 * @len: lenght of a string
 *
 * Return: length
 */
int _palindrome_check(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
		return (_palindrome_check(s + 1, len - 2));
	else
		return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is
 */
int is_palindrome(char *s)
{
	return (_palindrome_check(s, _strlen_recursion(s)));
}

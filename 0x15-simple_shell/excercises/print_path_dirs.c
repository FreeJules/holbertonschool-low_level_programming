#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to new string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * (_strlen(str) + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
/*int main(void)
{
	char *name = "PATH=";
	char *ptr;
	char *path_str;
	char **tab;
	char delim = ':';

	ptr = _getenv(name);
	path_str = _strdup(ptr + 5);
	tab = strtow(path_str, delim);
        if (tab == NULL)
        {
                printf("Failed tab1\n");
        }
	print_tab(tab);
	free(path_str); 
----
	char **tab;

	tab = path_dirs_array();
	print_tab(tab);
	return (0);
}*/

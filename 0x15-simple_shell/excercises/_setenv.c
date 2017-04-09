#include "holberton.h"
#include <errno.h>
/**
 * _strchr - locates character in string
 * @str: pointer to a string
 * c: char to find
 * Return: pointer to the matched character or NULL
 */
char *_strchr(const char *str, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)

			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/**
 * _putenv - adds or changes the value of environment variables
 * @str: pointer to a string
 * Return: 0 on success, or nonzero if an error occurs
 */
int _putenv(char *str)
{
	char **current;
	int namelen, envlen, equal, i;
	char *tmp;
	char **newenv;

	/*
	 * Find out how much of str to match when searching
	 * for a string to replace.
	 */
	tmp = _strchr(str, '=');
	namelen = tmp - str;
	++namelen;
	/*
	 * Search for an existing string in the environment and find the
	 * length of environ.  If found, replace and exit.
	 */
	envlen = 0;
	for (current = environ; *current; current++)
	{
		++envlen;
		equal = _strncmp(str, *current, namelen);
		if (equal == 0)
		{
			/* variable exists and found, insert the new version */
			*current = str;
			return (0);
		}
	}
	/* reallocate memory for environ to store new variable */
	/* envlen size (without NULL) + 2 (for new and NULL) */
	newenv = malloc(sizeof(char *) * (envlen + 2));
	if (newenv == NULL)
		return (-1);
	/* Add in the new variable */
	i = 0;
	for (i = 0; i < envlen; i++)
		newenv[i] = environ[i];
	/* environ = newenv; */
	newenv[envlen] = str;
	newenv[envlen + 1] = NULL;
	print_tab(newenv);
	return (0);
}
/**
 * _setenv - changes or adds the variable to the environment with the value,
 *           if variable does not already  exist. If it does exist in the
 *           environment, then its value is changed to value if overwrite
 *           is nonzero; if overwrite is zero, then the  value of name is
 *           not  changed.
 * @name: name of the variable
 * @value: value of the variable
 * @overwrite: if 0 the value of variable is not changed
 * Return: 0 on success,  or  -1  on  error
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *ptr;
	char *new_ptr;
	int ret_value;

/* Error = EINVAL if name is NULL, points to a string of length 0, */
/* or  contains an '=' character  */
	if (((name[0] == '\0') != 0) || (_strchr(name, '=') != NULL))
	{
		errno = EINVAL;
		return (-1);
	}
	if ((name == NULL) || (value == NULL))
	{
		errno = EINVAL;
		return (-1);
	}
/* use _getenv(name) to get a pointer to string of variable */
	ptr = _getenv(name);
/* check overwrite, if 0 return 0 */
	if (ptr != NULL && overwrite == 0)
		return (0);
/* Error = ENOMEM if insufficient memory to add new var to the environment. */
	new_ptr = malloc(_const_strlen(name) + _const_strlen(value) + 2);
	/* +2 for '=' and null terminator */
	if (new_ptr == NULL)
	{
		errno = ENOMEM;
		return (-1);
	}
/*create a string with new variable name and a value */
	new_ptr = _strcpy(new_ptr, name);
	new_ptr = _strcat(new_ptr, "=");
	new_ptr = _strcat(new_ptr, value);
/* add to environ using _putenv(new_ptr); */
	ret_value = _putenv(new_ptr);
	return (ret_value);
}
int main(void)
{
	char *name = "TEST";

	return (_setenv(name, "new variable", 0));
}

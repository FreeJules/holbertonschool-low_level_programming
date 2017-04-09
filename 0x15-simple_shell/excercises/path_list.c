#include "holberton.h"
/**
 * arr_size - finds size of array
 * @arr: array of pointers to strings
 * Return: size of the array
 */

int arr_size(char **arr)
{
	int i;

	if (arr == NULL || *arr == NULL)
		return (-1);
	i = 0;
	while (arr[i])
		i++;
	return (i);
}
/**
 * path_dirs_array - makes array of pointers for all dirs in the PATH
 * Return: Array of pointers
 */
char **path_dirs_array(void)
{
	char *ptr;
	char *name = "PATH";
	char *path_str;
	char delim = ':';
	char **dirs;

/* get string PATH=... from environment */
	ptr = _getenv(name);
/* duplicate string starting at char after = */
	path_str = _strdup(ptr + 5);
/* tokenize into separate string dirs */
	dirs = strtow(path_str, delim);
	if (dirs == NULL)
	{
		free(path_str);
		printf("Failed tab1\n");
		return (NULL);
	}
	free(path_str);
	return (dirs);
}
/**
 * path_dirs_list - builds a linked list of the PATH directories
 * @elements: array of pointers to strings that hold directories names
 * Return: pointer to head
 */
list_t *path_dirs_list(char **array)
{
	list_t *head;
	list_t *new;
	int i;

	head = NULL;
	for (i = 0; array[i] != NULL; i++)
	{
		new = add_node_end(&head, array[i]);
		if (new == NULL)
		{
			free_list(head);
			return (NULL);
		}
	}
	return (head);
}
int main(void)
{
	char **pathlist;
	list_t *head;
	int size;

	size = 0;
	head = NULL;
	pathlist = path_dirs_array();
	printf("array of pointers\n");
	print_tab(pathlist);
	head = path_dirs_list(pathlist);
	if (head == NULL)
		return (1);
	printf("list\n");
	print_list(head);
	size = arr_size(pathlist);
	printf("array size %d\n", size);
	return (0);
}

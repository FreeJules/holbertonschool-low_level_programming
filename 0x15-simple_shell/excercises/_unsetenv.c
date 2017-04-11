#include "holberton.h"
/**
 * delete_node - deletes the node with poiner of a listint_t
 * @head: pointer to head pointer
 * @ptr: pointer to the node that should be deleted
 * Return: 0 if it succeeded, -1 if it failed
 */
int delete_node(list_t **head, char *ptr)
{
	list_t *tmp;
	list_t *removeNode;

	tmp = *head;
	while (tmp)
	{
		if (_strcmp(tmp->str, ptr) == 0)
		{
			removeNode = *head;
			printf("\n\nremove node %s\n\n", removeNode->str);
			print_tab(environ);
			*head = removeNode->next;
			free(removeNode);
			return (0);
			}
		if (_strcmp((tmp->next)->str, ptr) == 0)
		{
			removeNode = tmp->next;
			printf("\n\nremove node %s\n\n", removeNode->str);
			tmp->next = removeNode->next;
			free(removeNode);
			return (0);
		}
		tmp = tmp->next;
	}
	return (-1);
}
/**
 * _unsetenv - deletes the variable name from the environment. If name does
 *  not exist in the environment, then the function succeeds, and the
 *  environment is unchanged.
 * @name:name of the environment variable
 * Return: Always 0 on success, or -1 on error
 */
int _unsetenv(const char *name)
{
	list_t *head;
	char *equal;
	char *node_ptr;
	int deleted;

	equal = _strchr(name, '=');
	if ((name == NULL) || ((name[0] == '\0') != 0) || (equal != NULL))
	{
		errno = EINVAL;
		return (-1);
	}
	head = path_dirs_list(environ);
	if (head == NULL)
	{
		errno = ENOMEM;
		return (-1);
	}
	printf("\nprint_list _unset 1\n");
	print_list(head);
	node_ptr = _getenv(name);
	printf("\n _get env node ptr %s\n", node_ptr);
	deleted = delete_node(&head, node_ptr);
	printf("\nprint_list _unsetenv %d\n", deleted);
	print_list(head);
	return (deleted);
}

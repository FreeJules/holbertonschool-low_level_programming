#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to head pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (1)
	{
		tmp = *head;
		if (tmp == NULL)
			break;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}

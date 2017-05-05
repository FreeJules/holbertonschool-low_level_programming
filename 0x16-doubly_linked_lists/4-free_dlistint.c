#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}

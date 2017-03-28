#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}

#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to head pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
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

#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer
 * @index: index of the node, starting from 0
 * Return: pointer to node; if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (tmp)
	{
		if (i == index && tmp)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

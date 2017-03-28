#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: the index of the node, starting at 0
 * Return: n-th node, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
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

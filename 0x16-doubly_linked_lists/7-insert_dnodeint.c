#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to ponter of first node
 * @idx: index of the list where the new node should be added; starts at 0
 * @n: data to be added to new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	new  =  malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if ((new->next)->next)
			(new->next)->prev = new;
		*h = new;
		return (new);
	}

	tmp = *h;
	i = 0;
	while (tmp)
	{
		if ((i + 1) == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			if (new->next)
				new->next->prev = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}

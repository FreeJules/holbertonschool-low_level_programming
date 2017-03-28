#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to ponter of first node
 * @idx: index of the list where the new node should be added; starts at 0
 * @n: data to be added to new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i;

	new  =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	i = 0;
	while (tmp)
	{
		if ((i + 1) == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}

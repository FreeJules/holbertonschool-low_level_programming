#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}

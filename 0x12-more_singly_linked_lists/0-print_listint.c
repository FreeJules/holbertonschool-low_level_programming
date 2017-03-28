#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
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

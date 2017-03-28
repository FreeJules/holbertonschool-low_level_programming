#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

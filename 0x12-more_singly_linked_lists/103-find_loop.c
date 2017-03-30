#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to first node in the list
 * Return:  The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *tmp, *start;
	size_t i, count;

	count = 0;
	tmp = head;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
		start = head;
		i = 0;
		while (i < count)
		{
			if (start != tmp)
			{
				start = start->next;
				i++;
			}
			else
				return (start);
		}
	}
	return (NULL);
}

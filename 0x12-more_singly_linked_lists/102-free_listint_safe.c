#include "lists.h"
/**
 * check_for_loop - function finds if  list has a loop
 * @head: pointer to first node in the list
 * Return: pointr to node where loop stsrts, NULL if no loop
 */
listint_t *check_for_loop(listint_t *head)
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
/**
 * free_listint_safe - frees a listint_t linked list, function can print
 *                      lists with a loop
 * @h: pointer to pointer to first node in the list
 * Return: the size of the list that was free'd, sets head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *start;
	size_t count;

	start = check_for_loop(*h);
	count = 0;
	while (h != NULL && *h != NULL)
	{
		count++;
		tmp = *h;
		*h = tmp->next;
		if (start == NULL)
			free(tmp);
		else
		{
			if (tmp != start)
 				free(tmp);
			else
			{
				tmp->next = NULL;
				count--;
			}
		}
	}
	return (count);
}

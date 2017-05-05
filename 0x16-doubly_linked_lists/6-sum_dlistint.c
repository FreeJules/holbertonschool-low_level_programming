#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to first node
 * Return: sum of all the data(n) of a dlistint_t, if list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *  order using the Insertion sort algorithm
 * @list: list to sort
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *t1, *t2;

	if (!list || !(*list) || !((*list)->next))
		return;
	t1 = *list;
	while (t1)
	{
		t2 = t1;
		while (t2)
		{
			if (t2->prev == NULL)
				break;
			if (t2->n < t2->prev->n)
			{
				t2->prev->next = t2->next;
				if (t2->next)
					t2->next->prev = t2->prev;
				t2->next = t2->prev;
				t2->prev = t2->next->prev;
				t2->next->prev = t2;
				if (t2->prev)
					t2->prev->next = t2;
				else
				{
					*list = t2;
					t2 = NULL;
				}
				print_list(*list);
			}
			else
				break;
		}
		t1 = t1->next;
	}
}

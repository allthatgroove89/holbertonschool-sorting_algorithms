#include "sort.h"
/**
 *insertion_sort_list - doubly linked list if integers
 *@list: list integers
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *last;

	if (list == NULL || (*list) == NULL)
		return;
	for (node = (*list)->next; node; node = node->next)
	{
		while (node->prev && node->prev->n > node->n)
		{
		last = node->prev;
		node->prev = last->prev;
		last->prev = node;
		last->next = node->next;
		node->next = last;
		if (node->prev)
			node->prev->next = node;
		else
			*list = node;

		if (last->next)
			last->next->prev = last;
		print_list(*list);
		}
	}
}

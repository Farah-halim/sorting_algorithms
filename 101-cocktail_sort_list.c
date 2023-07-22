#include "sort.h"
/**
 * cocktail_sort_list - Cocktail shaker sort algorithm
 * @list: doubly linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	int done = 0;
	listint_t *temp, *node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	temp = (*list);
	node = temp->next;
	while (node)
	{
		while (temp)
		{
			if (node->n < temp->n)
			{
				if (node->next)
					node->next->prev = node->prev;
				else
					done = 1;
				temp->next = node->next;
				node->next = temp;
				node->prev = temp->prev;
				if (temp->prev)
					temp->prev->next = node;
				else
					*list = node;
				temp->prev = node;
				temp = node->prev;
				print_list(*list);
			}
			else
			{
				node = node->next;
				temp = temp->next;
			}
		}
		if (done)
			break;
		node = node->next;
		temp = node->prev;
	}
}

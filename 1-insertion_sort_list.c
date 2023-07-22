#include "sort.h"
/**
 * insertion_sort_list - Insertion sort algorithm.
 * @list: A pointer to the head of the list to be sorted.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *current, *temp;

	if (list == NULL || *list == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		current = node;
		while (current->prev && current->prev->n > current->n)
		{
			temp = current->prev;
			current->prev = temp->prev;
			temp->next = current->next;
			current->next = temp;
			temp->prev = current;
			if (temp->next)
				temp->next->prev = temp;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		node = node->next;
	}
}

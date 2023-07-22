#include <stdio.h>
#include "sort.h"
/**
 * print_list - function to Print the integers of the list
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int x = 0;

	while (list)
	{
		if (x > 0)
			printf(", ");
		printf("%d", list->n);
		++x;
		list = list->next;
	}
	printf("\n");
}

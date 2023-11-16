#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insertion_sort_list - Prints an array of integers
 *
 * @list: The array to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *n;
	listint_t *temp;

	if (list != NULL && (*list)->next != NULL)
	{
		n = *list;
		n = n->next;
		while (n)
		{
			while (n->prev && n->n < (n->prev)->n)
			{
				temp = n;
				if (n->next)
				{
					(n->next)->prev = temp->prev;
				}
				(n->prev)->next = temp->next;
				n = n->prev;
				temp->prev = n->prev;
				temp->next = n;
				if (n->prev)
				{
					(n->prev)->next = temp;
				}
				n->prev = temp;
				if (temp->prev == NULL)
					*list = temp;
				print_list(*list);
				n = n->prev;
			}
			n = n->next;
		}
	}
}

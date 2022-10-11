#include "sort.h"

void swap_list(listint_t *, listint_t *, listint_t **);

/**
  * insertion_sort_list - sorts using insertion sort
  *
  * @list: double pointer to head of list
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL;
	listint_t *prev = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	prev = curr->prev;
	while (curr != NULL)
	{
		prev = curr->prev;
		while (prev != NULL && prev->n > curr->n)
		{
			swap_list(curr, prev, list);
			prev = curr->prev;
		}
		curr = curr->next;
	}
}

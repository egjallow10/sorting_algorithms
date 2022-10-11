#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void swap_int(int *array, int index, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_list(listint_t *curr, listint_t *prev, listint_t **head);
void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
int partition(int *array, int lo, int hi);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b, int *array, int size);
void shell_sort(int *array, size_t size);
void swap_list(listint_t *curr, listint_t *prev, listint_t **head);
void cocktail_sort_list(listint_t **list);
#endif /*_SORT_H_*/
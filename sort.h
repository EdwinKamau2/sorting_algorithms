#ifndef SORT_H
#define SORT_H

/* The Libraries */
#include <stddef.h>

/* Structures */

/**
 * struct listint_s - Is Doubly linked list node
 *
 * @n: The Integer stored in the node
 * @prev: Is Pointer to the previous element of the list
 * @next: Is Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *high, listint_t *low);
void swap(int *array, int a, int b);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif

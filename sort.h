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

/* Functions */

/* 0 */
void bubble_sort(int *, size_t);
void bubble_sort_swap(int *, int *);
/* 1 */
void insertion_sort_list(listint_t **);
void insertion_sort_list_swap(listint_t **, listint_t **, listint_t *);
/* 2 */
void selection_sort(int *, size_t);
void selection_sort_swap(int *, int *);
/* 3 */
void quick_sort(int *array, size_t size);
int quick_sort_partition(int *, int, int, size_t);
void quick_sort_recursion(int *, int, int, size_t);
void quick_sort_swap(int *, int *);

/* Support Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);



#endif

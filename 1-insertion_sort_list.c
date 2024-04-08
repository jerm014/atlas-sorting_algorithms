#include "sort.h"

/**
 * swap_nodes- swap two nodes in a listint_t doubly-linked list
 * @head:         head of the doubly-linked list
 * @a:            the first node to swap
 * @b:            the second node to swap
 */
void swap_nodes(listint_t **head, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*head = b;
	(*a)->prev = b;
	*a = b->prev;
}

/**
 * insertion_sort_list- sort a doubly linked list of integers using the
 *                      insertion sort algorithm
 *
 * @head:               doubly-linked list of integers
 *
 * Return:              nothing
 *
 */
void insertion_sort_list(listint_t **head)
{
	listint_t *i, *insert, *temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;

	for (i = (*head)->next; i != NULL; i = temp)
	{
		temp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swap_nodes(head, &insert, i);
			print_list((const listint_t *)*head);
		}
	}
}

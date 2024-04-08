#include "sort.h"

/**
 * quick_sort_sort- sort an array using quicksort and recursion
 *
 * @array:          the array to sort
 * @size:           the soze of the array to sort
 * @start:          the beginning element of this partition
 * @end:            the end element of this partition
 *
 * Return:          nothing
 *
 */

void quick_sort_sort(int *array, size_t size, size_t start, size_t end)
{
	size_t index, first = start - 1;
	int tmp, pivot;

	if (start >= end)
		return;

	pivot = array[end];

	for (index = start; index <= end; index++)
	{
		if (array[index] <= pivot)
		{
			first++;
			tmp = array[first];
			array[first] = array[index];
			array[index] = tmp;
			if (index != first)
			{
				print_array(array, size);
			}
		}
	}

	quick_sort_sort(array, size, start, first - 1);
	quick_sort_sort(array, size, first + 1, end);
}

/**
 * quick_sort_sort_swap- swap two integers
 *
 * @a:                   pointer to int
 * @b:                   pointer to int
 *
 * Return:               nothing
 */
void quick_sort_sort_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * quick_sort- quicksort an array of integers
 *
 * @array:     array to be sorted
 * @size:      size of the array
 *
 * Return:     nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	if (size < 2)
		return;

	quick_sort_sort(array, size, 0, size - 1);
}

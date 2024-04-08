#include "sort.h"

/**
 * selection_sort_swap- swap two integers
 *
 * @a:                  pointer to int
 * @b:                  pointer to int
 *
 * Return:              nothing
 */
void selection_sort_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * selection_sort- sort an array of integers using the selection sort algorithm
 *
 * @array:         array of integers to sort
 * @size:          size of array of integers to sort
 *
 * Return:         nothing
 *
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = &array[a];
		for (b = a + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if ((array + a) != min)
		{
			selection_sort_swap(&array[a], min);
			print_array(array, size);
		}
	}
}

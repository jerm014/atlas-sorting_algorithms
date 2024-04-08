#include "sort.h"

/**
 * quick_sort_sort- a recursive quicksort function
 *
 * @array:          array to be sorted
 * @low:            the start of the part to sort
 * @high:           the end of the part to sort
 * @size:           size of the array
 *
 * Return:          nothing
 */
void quick_sort_sort(int *array, int low, int high, int size)
{
	int pivot, start, end;

	pivot = array[high];
	start = low;
	end = high;
	temp = 0;

	if (low >= high)
		return;
	while (start < end)
	{
		while (array[start] < pivot && start < end)
		{
			start++;
		}
		while (array[end] >= pivot && start < end)
		{
			end--;
		}

		if (start < end)
		{
			quick_sort_sort_swap(&array[start], &array[end]);
			print_array(array, size);
		}
	}

	if (high != end)
	{
		array[high] = array[start];
		array[start] = pivot;
		print_array(array, size);
	}

	quick_sort_sort(array, low, start - 1, size);
	quick_sort_sort(array, start + 1, high, size);
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

	quicksort_sort(array, 0, size - 1, size);
}

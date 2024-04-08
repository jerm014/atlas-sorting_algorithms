#include "sort.h"

/**
* partition- partition the array and pick the last element as pivot
*            (lomuto partition scheme)
*
* @arr:      the array
* @low:      lowest point
* @high:     highest point
* @size:     array size
*
* Return:    index of the pivot
*
*/
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];

	int i = low - 1, j;

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot && arr[++i] != arr[j])
		{
			quick_sort_sort_swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	if (arr[++i] != arr[high])
	{
		quick_sort_sort_swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}
	return (i);
}

/**
* quick_recursion- recursively sort partition until array is sorted
* @arr:            array
* @low:            lowest point
* @high:           highest point
* @size:           array size
*
*/
void quick_recursion(int *arr, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(arr, low, high, size);

		quick_recursion(arr, low, pivot_index - 1, size);
		quick_recursion(arr, pivot_index + 1, high, size);
	}
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

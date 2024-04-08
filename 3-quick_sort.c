#include "sort.h"

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
	quick_sort_recursion(array, 0, (int)(size - 1), size);
}

/**
* quick_sort_recursion- recursively sort partition until array is sorted
*
* @arr:                 array
* @low:                 lowest point
* @high:                highest point
* @size:                array size
*
* Return:               nothing
*
*/
void quick_sort_recursion(int *arr, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = quick_sort_partition(arr, low, high, size);

		quick_sort_recursion(arr, low, pivot - 1, size);
		quick_sort_recursion(arr, pivot + 1, high, size);
	}
}

/**
* quick_sort_partition- partition the array and pick the last element as pivot
*                       (lomuto partition scheme)
*
* @arr:                 the array
* @low:                 lowest point
* @high:                highest point
* @size:                array size
*
* Return:               index of the pivot
*
*/
int quick_sort_partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];

	int i = low - 1, j;

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot && arr[++i] != arr[j])
		{
			quick_sort_swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	if (arr[++i] != arr[high])
	{
		quick_sort_swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}
	return (i);
}

/**
 * quick_sort_swap- swap two integers
 *
 * @a:              pointer to int
 * @b:              pointer to int
 *
 * Return:          nothing
 */
void quick_sort_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

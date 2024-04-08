#include "sort.h"

/**
 * swap-   swap two integers
 *
 * @a:     pointer to int
 * @b:     pointer to int
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * bubble_sort- sort an array of integers using bubble sort
 *
 * @array:      the array of integers to sort
 * @size:       the size of the array of integers to sort
 *
 * Return:      nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t a, b;

	if (size > 1)
	{
		for (a = 0; a < (size - 1); a++)
		{
			for (b = 1; b < size; b++)
			{
				if (array[b - 1] > array[b])
				{
					swap(&array[b - 1], &array[b]);
					print_array(array, size);
				}
			}
		}
	}
}

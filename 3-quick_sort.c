#include "sort.h"
#include <stdio.h>

/**
 * __qsort - sorts an array using the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @start: the start of the array
 * @end: end of array
 */

void __qsort(int *array, int start, int end, int size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		__qsort(array, start, pivot - 1, size);
		__qsort(array, pivot + 1, end, size);
	}
	else
		return;
}

/**
 * quick_sort - main quick sort function to call recursive _quick_sort
 * includes valodity check for array
 * @array: array to undergo quicksort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	__qsort(array, 0, size - 1, size);
}

/**
 * partition - creates a partition off of the array using the pivot
 * @array: array to partition
 * @start: start of the array
 * @end: of the array
 * @size: of array, mainly for printing purpose
 * Return: index of pivot
 */

int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int i = start;
	int j;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}

	return (i);
}

/**
 * swap - swaps two content of an array
 * @x: pointer to first value to swap
 * @y: pointer to second value to swap with x
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

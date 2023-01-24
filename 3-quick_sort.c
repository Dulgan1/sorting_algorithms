#include "sort.h"
#include <stdio.h>

/**
 * _quick_sort - sorts an array using the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @start: the start of the array
 * @end: end of array
 */

void _qsort(int *array, size_t start, size_t end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end);
		printf("Partition done\n");
		_qsort(array, start, pivot - 1, size);
		printf("First rec\n");
		_qsort(array, pivot + 1, end, size);
		printf("Second rec\n");
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
	_qsort(array, 0, size - 1, size);
}

/**
 * partition - creates a partition off of the array using the pivot
 * @array: array to partition
 * @start: start of the array
 * @end: of the array
 * @size: of array, mainly for printing purpose
 * Return: index of pivot
 */

int partition(int *array, int start, int end)
{
	int pivot = array[end];
	int i = start;
	int j;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[end]);

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

#include "sort.h"

/**
 * selection_sort - sorts and array of size using selection sort algorithm
 * @array: the array to be sorted
 * @size: soze of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i <= size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}

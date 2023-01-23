#ifndef SORT_H
#define SORT_H
#include <stddef.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *next;
} listint_t;

/**
 *
 * print_array - prints content of an array
 * @array: array to iterately print its content
 * @size: size of the array
 * Return: void
 */

void print_array(const int *array, size_t size);

/**
 * print_list - prints contents of a linked list
 * @list: pointerr to the list to be print
 * Return: void
 */

void print_list(const listint_t *list);

/**
 * bubble_sort - sorts the contents of an array
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size);

/**
 * selection_sort - sorts and array of size using selection sort algorithm
 * @array: the array to be sorted
 * @size: soze of the array
 * Return: void
 */

void selection_sort(int *array, size_t size);
#endif

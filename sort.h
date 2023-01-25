#ifndef SORT_H
#define SORT_H
#include <stddef.h>

/**
 * struct listint_s - doubly linked list with int as data
 * @n: data
 * @next: pointer to next
 * @prev: pointer to previous
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *next;
	struct listint_s *prev;
} listint_t;

/**
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

/**
 * partition - creates a partition off of the array using the pivot
 * @array: array to partition
 * @start: start of the array
 * @end: of the array
 * @size: of array, mainly for printing purpose
 * Return: index of pivot
 */

int partition(int *array, int start, int end, int size);

/**
 * quick_sort - main quick sort function to call recursive _quick_sort
 *              includes validity check for array
 * @array: array to undergo quicksort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size);

/**
 * __quick_sort - sorts an array using the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @start: the start of the array
 * @end: end of array
 *
 */

void __qsort(int *array, int  start, int end, int size);

/**
 * swap - swaps two content of an array
 * @x: pointer to first value to swap
 * @y: pointer to second value to swap with x
 */

void swap(int *x, int *y);

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sorting
 * @list: doubly linked list to sort
 */

void insertion_sort_list(listint_t **list);

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */

void print_list(const listint_t *list);

/**
 * shell_sort - sorts shelly like
 * @array: array to take in
 * @size: size of array
 *
 */

void shell_sort(int *array, size_t size);
#endif

#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t lower, size_t higher);

/**
 * binary_search_recursion - Aid to `advanced_binary`, recursively searches
 * for a value in an integer array.
 * @array: Pointer to first element of array to search.
 * @value: Value to search for.
 * @lower: Starting index in array.
 * @higher: Ending index in array.
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t lower, size_t higher)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (lower + higher) / 2;
	printf("Searching in array: ");
	for (i = lower; i <= higher; i++)
		printf("%i%s", array[i], i == higher ? "\n" : ", ");

	if (array[lower] == value)
		return ((int)lower);

	if (array[lower] != array[higher])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, higher));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							lower, mid));
	}

	return (-1);
}

/**
 * advanced_binary - Looks for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lower = 0;
	size_t higher = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, lower, higher));
}

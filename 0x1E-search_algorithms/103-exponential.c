#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t u, size_t v);

/**
 * min - Function returns the minimum of two size_t values.
 * @u: First value.
 * @v: Second value.
 *
 * Return: `u` if lower or equal to `v`, `v` otherwise
 */
size_t min(size_t u, size_t v)
{
	return (u <= v ? u : v);
}

/**
 * binary_search_helper - Looks for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`).
 * @array: Pointer to first element of array to seach.
 * @value: Value to search for.
 * @low: Starting index.
 * @high: Ending index.
 *
 * Return: Index containing `value`, or -1 if `value` not found or
 * `array` is NULL.
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - Looks for a value in a sorted array of integers
 * using an exponential search algorithm.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index containing `value`, or -1 if `value` not found or
 * `array` is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}

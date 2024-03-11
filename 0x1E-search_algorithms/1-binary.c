#include "search_algos.h"

/**
 * binary_search - Function looks for a value in an integer array using binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`.
 * @array: Pointer to first element of array to seach.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index containing `value`, or -1 if `value` not found or
 * `array` is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int y;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (y = low; y <= high; y++)
			printf("%i%s", array[y], y == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

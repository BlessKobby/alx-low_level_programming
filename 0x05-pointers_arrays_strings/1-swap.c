#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: An integer to be swapped
 * @b: An integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

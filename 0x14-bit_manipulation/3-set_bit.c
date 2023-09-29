#include "main.h"

/**
 * set_bit - Function that sets a bit at a given index to 1.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 Successfully executed, -1 Execution failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

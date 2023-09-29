#include "main.h"

/**
 * get_endianness - Function that checks if a machine is little or big endian.
 * Return: 0 if Big and 1 if little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

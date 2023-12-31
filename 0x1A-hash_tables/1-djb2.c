#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The hash calculated.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hat;
	int c;

	hat = 5381;
	while ((c = *str++))
		hat = ((hat << 5) + hat) + c; /*  the hash * 33 + c */

	return (hat);
}

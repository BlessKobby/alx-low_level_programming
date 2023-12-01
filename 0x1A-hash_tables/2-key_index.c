#include "hash_tables.h"

/**
 * key_index - Gets the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: The key to retrive index of.
 * @size: The size of the array of the hash_table.
 *
 * Return: The index of the key within the hash.
 * Description: Uses the djb2 algorithm and for the next tasks.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

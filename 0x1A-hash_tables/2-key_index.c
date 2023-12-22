#include "hash_tables.h"
/**
 * key_index - Function that provides the index for a given key
 * @key: The key for which the index is calculated
 * @size: The size of the hash table's array
 * Return: Returns the index where the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || !size)
		return (0);
	idx = hash_djb2(key) % size;
	return (idx);
}

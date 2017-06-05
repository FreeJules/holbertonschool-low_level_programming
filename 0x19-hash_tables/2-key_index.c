#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: Key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the
 *  array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_number, index;

	hash_number = hash_djb2(key);
	index = hash_number % size;
	return (index);
}

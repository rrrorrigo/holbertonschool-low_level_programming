#include "hash_tables.h"
/**
 * key_index - function that ive the index of a key
 * @key: key
 * @size: size of the hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return hash % size;
}

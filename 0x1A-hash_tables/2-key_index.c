#include "hash_tables.h"
/**
 * key_index - function that ive the index of a key
 * @key: key
 * @size: size of the hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0, hash;

	for (; i < size; i++, key++)
	{
		hash += (*key) * 3 + 3;
	}
	return hash % size;
}

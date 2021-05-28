#include "hash_tables.h"
/**
 * hash_table_t - function that creates a hash table
 * @size: size of the arra
 * Return: pointer to newly created hash table, if error return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = calloc(size, sizeof(hash_table_t));
	if (!new)
		return NULL;
	new->size = size;
	new->array = calloc(size, sizeof(hash_table_t *) * size);
	if (!new->array)
	{
		free(new);
		return NULL;
	}
	return new;
}

#include "hash_tables.h"
/**
 * hash_table_get - function that get the value of key
 * @ht: pointer to the struct
 * @key: key to check
 * Return: Value associated with the element, or NULL if key doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *aux;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (ht->array[i]->value);
		aux = aux->next;
	}
	return (NULL);
}

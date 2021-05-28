#include "hash_tables.h"
/**
 * hash_table_set - fuction that adds alement to the hash table
 * @ht: pointer to the hash table struct
 * @key: key
 * @value: value of the key
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux;
	hash_node_t *new;
	unsigned long int i;

	if (!ht || !key)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			if (!aux->value)
				return (0);
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}

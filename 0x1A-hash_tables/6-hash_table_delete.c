#include "hash_tables.h"
/**
 * hash_table_delete - function that delete hash table.
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *del;
	unsigned int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			del = aux;
			free(del->key);
			free(del->value);
			aux = aux->next;
			free(del);
		}
		free(aux);
	}
	free(ht->array);
	free(ht);
}

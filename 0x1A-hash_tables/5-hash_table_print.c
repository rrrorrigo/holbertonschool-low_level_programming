#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	short int aux = 0;
	hash_node_t *arr;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		arr = ht->array[i];
		for (; arr; arr = arr->next)
		{
			if (aux)
				printf(", ");
			printf("'%s': '%s'", arr->key, arr->value);
			aux = 1;
		}
	}
	printf("}\n");
}

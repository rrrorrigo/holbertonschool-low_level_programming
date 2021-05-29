#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = ht->size, ii = 0;
	short int aux = 0;
	hash_node_t *arr;

	if (!ht)
		return;
	printf("{");
	for (; ii < i; ii++)
	{
		arr = ht->array[ii];
		for (; arr; arr = arr->next)
		{
			if (aux)
				printf(", ");
			printf("'%s': '%s'", arr->key, arr->val);
			aux = 1;
		}
	}
	printf("}\n");
}

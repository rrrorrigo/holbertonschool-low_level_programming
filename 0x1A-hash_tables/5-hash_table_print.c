#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = ht->size, ii = 0;
	short int aux = 1;
	hash_node_t *arr;
	char *key, *val;

	if (!ht)
		return;
	putchar('{');
	for (; ii < i; ii++)
	{
		arr = ht->array[ii];
		for (; arr; arr = arr->next)
		{
			key = ht->array[ii]->key;
			val = ht->array[ii]->value;
			if (aux)
				printf("\'%s\': \'%s\'", key, val);
			else
				printf(", \'%s\': \'%s\'", key, val);
			aux = 0;
		}
	}
	printf("}\n");
}

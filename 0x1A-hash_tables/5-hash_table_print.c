#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
        unsigned long int i = ht->size, ii = 0;
        short int aux = 1;
	char *key, *value;

	putchar('{');
        for(; ii < i; ii++)
                if(ht->array[ii] != NULL)
                {
			key = ht->array[ii]->key;
			value = ht->array[ii]->value;
                        if (aux)
                                printf("\'%s\': \'%s\'", key, value);
                        else
                                printf(", \'%s\': \'%s\'", key, value);
                        aux = 0;
                }
        printf("}\n");
}

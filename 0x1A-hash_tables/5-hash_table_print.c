#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hashtable
 * Return: void, just print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, n_el = 0;
	hash_node_t *actual;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		actual = ht->array[idx];
		while (actual)
		{
			if (n_el++ > 0)
				printf(", ");
			printf("'%s': '%s'", actual->key, actual->value);
			actual = actual->next;
		}
	}
	printf("}\n");
}

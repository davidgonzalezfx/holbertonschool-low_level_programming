#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hastable
 * Return: void, just free everything
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *actual, *nxt;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		actual = ht->array[idx];
		while (actual)
		{
			nxt = actual->next;
			free(actual->key);
			free(actual->value);
			free(actual);
			actual = nxt;
		}
	}

	free(ht->array);
	free(ht);
}

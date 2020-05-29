#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table to look into
 * @key: is the key looking for
 * Return: Returns the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int pos;
	hash_node_t *actual;

	if (!ht || !key || !(*key))
		return (NULL);

	pos = key_index((unsigned char *)key, ht->size);
	actual = ht->array[pos];

	while (actual)
	{
		if (!strcmp(key, actual->key))
			return (actual->value);
		actual = actual->next;
	}

	return (NULL);
}

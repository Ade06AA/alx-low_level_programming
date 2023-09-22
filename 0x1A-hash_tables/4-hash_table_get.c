#include "hash_tables.h"

/**
* hash_table_get - get value of a paticular key
* @ht: the source table
* @key: the key of the value to be gotten
* Return: the value gotten if present else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;
	
	if (!ht || !key)
		return (NULL);
	hash = key_index((const unsigned char *) key, ht->size);
	node = (ht->array)[hash];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

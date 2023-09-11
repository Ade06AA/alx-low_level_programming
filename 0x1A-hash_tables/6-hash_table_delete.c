#include "hash_table.h"

/**
* free_node - fress a node
* @n: the node to be freed
* Return: void
*/
void free_node(hash_node_t *n)
{
	hash_node_t *node;

	node = n;
	while (node != NULL)
	{
		node = n->next;
		free(n->key);
		free(n->value);
		free(n);
		n = NULL;
		n = node;
	}
}

/**
* hash_table_delete - delete a hash table
* @ht: hash table to be deleteted
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		if (node != NULL)
			free_node(node);
	}
	free(ht->array);
	free(ht);
	ht = NULL:
}

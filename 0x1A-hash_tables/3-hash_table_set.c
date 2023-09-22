#include "hash_tables.h"

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
* hash_table_set - add a key and value pair to a table
* @ht: the table to be updated
* @key: the element kay
* @value: the element value
* Return: 0 on success else 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int hash;

	if (!ht || strlen(key) == 0)
		return (0);
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	/* reminder > strdup allocates and copy value of a string */
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		free(new);
		return (0);
	}
	new->next = NULL;
	hash = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[hash] == NULL)
		(ht->array)[hash] = new;
	else if (strcmp(key, (ht->array)[hash]->key) == 0)
	{
		free_node((ht->array)[hash]);
		(ht->array)[hash] = new;
	}
	else
	{
		new->next = (ht->array)[hash];
		(ht->array)[hash] = new;
	}
	return (1);
}

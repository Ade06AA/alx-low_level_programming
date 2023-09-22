#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the hash table
* Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new;
	hash_node_t **array;

	if (size < 1)
		return (NULL);
	/*array = calloc(size, sizeof(hash_node_t));*/
	array = malloc(sizeof(*array) * size);
	if (!array)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	new->size = size;
	new->array = array;
	for (i = 0; i < size; i++)
		array[i] = NULL;
	return (new);
}

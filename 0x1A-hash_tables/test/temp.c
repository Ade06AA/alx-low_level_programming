#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	ht = NULL;
}
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = (ht->array)[i];			
			while (node != NULL)
			{
				if (flag == 0)
				{
					printf("'%s': '%s'", node->key, node->value);
					flag = 1;
				}
				else
					printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;

	hash = key_index(key, ht->size);
	node = (ht->array)[hash];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
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
	hash = key_index(key, ht->size);
	if ((ht->array)[hash] == NULL)
		(ht->array)[hash] = new;
	else
	{
		new->next = (ht->array)[hash];
		(ht->array)[hash] = new;
	}
	return (1);
}
hash_table_t *Thash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *new;
	hash_node_t **array;

	if (size < 1)
		return NULL;
	array = malloc(size * sizeof(hash_node_t));
	if (!array)
		return NULL;
	new = malloc(sizeof(hash_table_t));
	new->size = size;
	new->array = array;
	for (i = 0; i < size; i++)
		array[i] = NULL;
	return new;
}

unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int hash = 5381;

	if (!str)
		return -1;
	for (i = 0; str[i]; i++)
		hash = ((hash * str[i]) << 3) + str[i];
	return hash;
}



unsigned long int key_index(const unsigned char *key, unsigned long int s)
{
	int i;
	unsigned long int hash = 5381;

	for (i = 0; key[i]; i++)
		hash = ((hash * key[i]) << 3) + key[i];
	hash = hash % s;
	return hash;
}

int main(int argc, char *argv[])
{
	int i;
	char *vv;
	printf("1\n");
	hash_table_print(NULL);	
	hash_table_t *tt = Thash_table_create(124);
	printf("2\n");
	hash_table_print(tt);
	
	i = hash_table_set(tt, "ade", "school ade");
	i = hash_table_set(tt, "bola", "school bola");
	i = hash_table_set(tt, "tobi", "school tobi");
	i = hash_table_set(tt, "dele", "school dele");
	printf("3\n");
	hash_table_print(tt);
	hash_table_delete(tt);
	/*vv = hash_table_get(tt, argv[1]);
	printf(" === %s\n", vv);*/
	/*for (i =1; i < argc; i++)
	{
		printf(" %s ---> ", argv[i]);
		printf(" %lu \n", key_index(argv[i], 500));
	}*/

	return 1;
}

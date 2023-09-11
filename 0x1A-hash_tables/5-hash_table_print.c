#include "hash_table.h"

/**
* hash_table_print - prints all the content of an hash table
* @ht: the source hash table
* Return: void
*/
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
					printf(", '%s': '%s', ", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}

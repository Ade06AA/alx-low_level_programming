#include "hash_tables.h"


/**
* key_index - create an hash from a string
* @key: the string to be hashed
* @s: maximum size of the hash
* Return: the hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int s)
{
	int i, c;
	unsigned long int hash = 5381;

	for (i = 0; (c = key[i]); i++)
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % s);
}

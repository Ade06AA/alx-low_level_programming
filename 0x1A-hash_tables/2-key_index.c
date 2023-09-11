#include "hash_table.h"


/**
* key_index - create an hash from a string
* @key: the string to be hashed
* @s: maximum size of the hash
* Return: the hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int s)
{
	int i;
	unsigned long int hash = 5381;

	for (i = 0; key[i]; i++)
		hash = ((hash * key[i]) << 3) + key[i];
	hash = hash % s;
	return hash;
}

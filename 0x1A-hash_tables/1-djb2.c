#include "hash_tables.h"
/**
* hash_djb2 - djb2 algorithm implimentation
* @str: string to be hashed
* Return: hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	int i, c;
	unsigned long int hash = 5381;

	for (i = 0; (c = str[i]); i++)
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

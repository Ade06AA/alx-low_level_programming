#include "hash_table.h"

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

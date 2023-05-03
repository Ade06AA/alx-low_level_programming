#include "main.h"
#include <stdlib.h>
/**
* create_array - func name
* @size: func arg 1
* @a: func arg 2
* Return: c
*/
char *create_array(unsigned int size, char a)
{
	char *c;
	unsigned int i;

	if (size == 0)
		return (NULL);

	c = malloc(sizeof(a) * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		c[i] = a;

	return (c);
}

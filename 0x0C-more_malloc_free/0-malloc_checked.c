#include "main.h"
/**
* malloc_checked - func name
* @a: func arg 1
* Return: void
*/
void *malloc_checked(unsigned int a)
{
	void *p;

	p = malloc(a);
	if (p == NULL)
		exit(98);
	return (p);
}

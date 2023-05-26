#include "main.h"

/**
* set_bit - func name
* @n: func arg 1
* @i: func arg 2
* Return: int
*/
int set_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int l;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	l = 1UL << i;
	*n |= l;
	return (1);
}

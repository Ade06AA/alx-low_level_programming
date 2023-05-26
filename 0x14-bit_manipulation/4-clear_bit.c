#include "main.h"

/**
* clear_bit - func name
* @n: func arg 1
* @i: func arg 2
* Return: int
*/
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int k;

	if (i >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	k = ~(1UL << i);
	*n &= k;
	return (1);
}



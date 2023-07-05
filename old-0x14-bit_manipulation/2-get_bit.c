#include "main.h"

/**
* get_bit - func name
* @n: func arg 1
* @i: func arg 1
* Return: c
*/
int get_bit(unsigned long int n, unsigned int i)
{
	unsigned long int mask = 1UL << i;

	if (i >= sizeof(unsigned long int) * 8)
	return (-1);
	if (n & mask)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
* get_endianness - func name
* Return: void
*/
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *p = (unsigned char *)&value;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}


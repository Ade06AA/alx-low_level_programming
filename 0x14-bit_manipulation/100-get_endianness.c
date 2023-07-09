#include "main.h"
/**
* get_endianness - n
* Return: n
*/
int get_endianness(void)
{
	unsigned int y = 1;
	char *b = (char *)&y;

	return (*b & 1);
}

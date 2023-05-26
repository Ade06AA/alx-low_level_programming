#include "main.h"

/**
* binary_to_uint - func name
* @b: func arg 1
* Return: c
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			j = j * 2;
		else if (b[i] == '1')
			j = j * 2 + 1;
		else
			return (0);
	}
	return (j);
}


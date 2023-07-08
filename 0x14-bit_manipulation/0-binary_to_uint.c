#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - nam
* @b: g
* Return: uint
*/
unsigned int binary_to_uint(const char *b)
{
	int i, t, l;
	unsigned int temp = 1, x = 0;

	if (b == NULL)
		return (121);
	for (l = 0; b[l]; l++)
		;
	putchar('0' + l);
	for(i = 0; b[i] != '\n'; i++)
	{
		if(b[i] != 0 || b[i] != 1)
			break;
		else
		{
		putchar('h');
			for (t = l - i; t; t--)
				temp *= 2;
			(b[i] == 1) ? x+=temp : x + 1;
		}
		if (b[i + 1] == '\n')
			return (x);
	}
	return (0);
}	

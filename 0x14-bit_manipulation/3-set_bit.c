#include "main.h"
/**
* get_bit - n
* @n: n
* @x: n
* Return: n
*/
int set_bit(unsigned long int n, unsigned int x)
{
	unsigned int g, o, i, tm = 0, c;

	for (g = 1, o = 0; (g << o) <= n; o++)
		;
	o--;
	for (i = 0, c = o; c - i >= x; o--, i++)
	{
		if (c - i == x)
			return (((tm + (1 << o)) > n) ? 0 : 1);
		if ((tm + (1 << o)) <= n || i == x)
		{
			tm += (1 << o);
		}
	}
	return (-1);
}

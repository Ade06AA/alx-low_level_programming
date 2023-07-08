#include "main.h"
#include <stdio.h>

/**
* pow - n
* @n: n
* Return: bn
*/
unsigned long int mpow(unsigned long int p, int i)
{
	for ( ; i - 1; i--)
		p *= p;
	return (p);
}
/**
* print_binary - nf
* @n: n
* Return: bn
*/
void print_binary(unsigned long int n)
{
	unsigned long int i, s = 0, h = 1;
	int e, u;

	for (i = 0; ; i++)
	{
		if (i > 11)
			break;
		if (n >= h && (h * 2) > n)
		{
			putchar('1');
			s = h;
			for (e = i - 1; e; e--)
			{
				u = mpow(2, e);
				if ((s + u) > n)
					putchar('0');
				else
				{
					s += u;
					putchar('1');
				}
			}
			(s + 1 > n) ? putchar('0') : putchar('1');
			return;
		}
		else
			h *= 2;
	}
}

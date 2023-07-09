#include "main.h"
/**
* mpow - n
* @p: n
* @i: n
* Return: bn
*/
unsigned long int mpow(unsigned long int p, int i)
{
	int temp = p;

	for ( ; i > 1; i--)
		p *= temp;
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

	(n > 0) ? _putchar('1') : _putchar('0');

	for (i = 0; h * 2 <= n ; i++)
	{
		if (n >= h && (h * 4) > n)
		{
			s = h * 2;
			for (e = i; e > 0; e--)
			{
				u = mpow(2, e);
				if ((s + u) > n)
					_putchar('0');
				else
				{
					s += u;
					_putchar('1');
				}
			}
			(n == s) ? _putchar('0') : _putchar('1');
			return;
		}
		else
			h *= 2;
	}
}

#include "main.h"

/**
* print_binary - func name
* @n: func arg 1
* Return: c
*/
void print_binary(unsigned long int n)
{
	int k = sizeof(n) * 8;
	int i;
	unsigned long int o = 1UL << (k - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < k; i++)
	{
		if (n & o)
			_putchar('1');
		else
			_putchar('0');

		o >>= 1;
	}
}

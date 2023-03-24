#include "main.h"
/**
* print_diagonal - func name
* @n: func arg 1
* Return: void
*/
void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 1; i <= n; i++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}

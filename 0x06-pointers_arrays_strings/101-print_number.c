#include "main.h"
/**
* print_number - func name
* @n: func arg 1
* Return: void
*/
void print_number(int n)
{
	int i;

	if (n >= 0)
	{
		if (n != 0)
		{
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
	}
	if (n < 0)
	{
		i = n * (-1);
		_putchar('-');
		print_number(i);
	}
}

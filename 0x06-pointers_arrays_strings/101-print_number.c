#include "main.h"
/**
* print_number - func name
* @n: func arg 1
* Return: void
*/
void print_number(int n)
{
	if (n >= 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	if (n < 0)
	{
		_putchar('-');
		print_number(n * (-1));
	}
}

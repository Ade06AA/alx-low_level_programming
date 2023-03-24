#include "main.h"
/**
* print_number - func name
* Description - print a nummber using only _putchar
* Return: void
* @n: func arg 1 - integer to be printed as char
*/
void print_number(int n)
{
	int k;
	if (n >= 0)
	{
	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + 48);
	}
	}
	if (n < 0)
	{
		k = n * (-1);
		_putchar('-');
		print_number (k);
	}
}

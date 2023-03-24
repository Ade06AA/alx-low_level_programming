#include "main.h"
/**
* print_triangle -func name
* Return: void
* @s: func arg 1
*/
void print_triangle(int s)
{
	int i;
	int j;
	int k;

	for (i = 0; i < s; i++)
	{
		for (j = 1; j < (s - i); j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}

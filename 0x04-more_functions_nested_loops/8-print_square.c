#include "main.c"
/**
* print_square - func arg
* @s: func arg 1 - size
* Return: void
*/
void print_square(int s)
{
	int i;
	int j;

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
			_putchar('#');
		_putchar('\n');
	}
}


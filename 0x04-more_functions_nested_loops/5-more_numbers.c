#include "main.h"
/**
* more_numbers - func name
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar(j + 48);
		_putchar('1');
		_putchar('0');
		_putchar('1');
		_putchar('1');
		_putchar('1');
		_putchar('2');
		_putchar('1');
		_putchar('3');
		_putchar('1');
		_putchar('4');
		_putchar('\n');
	}
}

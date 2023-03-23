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
		for (j = 0; j <= 14; j++)
			_putchar(j + 48);
		_putchar('\n');
	}
}

#include "main.h"
/**
* print_rev - func name
* @s: func arg 1
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int j;

	j = 0;
	for (i = 0; *s != '\0'; i++)
	{
		s++;
		j++;
	}
	for (i =  j; i > 0; i--)
		_putchar(*(s + i - 1) + 48);
	_putchar('\n');
}


#include "main.h"
/**
* _puts_recursion - func name
* @s: func arg 1
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	if (*(s + i) != '\0')
		_putchar(*s);
	i = 1;

	if (*(s + i) != '\0')
	{
	_puts_recursion(s + i);
	i++;
	}
	else
		_putchar('\n');
}

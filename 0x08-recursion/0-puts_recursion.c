#include "main.h"
/**
* _puts_recursion - func name
* @s: func arg 1
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	_putchar(*s);
	i = 0;

	if (*(s + i) != '\0')
	{
	++i;
	_puts_recursion(s + i);
	if (*(s + i) == '\0')
		_putchar('\n');
	}
}

#include "main.h"
/**
* _puts_recursion - func name
* @s: func arg 1
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	putchar(*s);
	if (*(s + i) != '\0')
	{
	++i;
	_puts_recursion(s + i);
	}
	else
		putchar('\n');
}

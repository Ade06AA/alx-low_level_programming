#include "main.h"
/**
* _puts_recursion - func name
* @s: func arg 1
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	i = 1;

	if (*s != '\0')
		_putchar(*s);
	if (*(s + i) == '\0' || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + i);
	i++;
}

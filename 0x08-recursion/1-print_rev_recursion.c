#include "main.h"
/**
* _print_rev_recursion - func name
* @s: func arg 1
* Return: void
*/
void _print_rev_recursion(char *s)
{
	int i;

	i = 1;

	if (*(s + i) != '\0')
		_print_rev_recursion(s + i);
	i++;
	if (*s != '\0')
		_putchar(*s);
}

#include "main.h"
/**
* _puts_recursion - func name
* @s: func arg 1
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	putchar(*s);
	i = 1;
	
	(*(s + i) != '\0') ? {(_puts_recursion(s + i)); i++} : putchar('\n');
}

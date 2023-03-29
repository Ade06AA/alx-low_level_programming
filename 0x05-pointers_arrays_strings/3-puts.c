#include "main.h"
/**
* _puts - func name
* @str: func arg 1
* Return: void
*/
void _puts(char *str)
{
	int i;
	char k;

	for (i = 0; ; i++)
	{
		if (*str == '\0')
			break;
		str++;
		k = *str;
		_putchar(k);
	}
}

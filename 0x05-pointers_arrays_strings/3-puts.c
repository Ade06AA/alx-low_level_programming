#include "main.h"
/**
* _puts - func name
* @t: func arg 1
* Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; ;i++)
	{
		if (*str == '\0')
			break;
		str++;
		_putchar(*str);
	}
}

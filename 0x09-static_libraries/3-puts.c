#include "main.h"
/**
* _puts - func name
* @str: func arg 1
* Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(*str);
		str++;
	}
}

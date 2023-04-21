#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - func name
* @sp: func arg 1 - type char *
 * the seprator
* @n: func aeg 2
 * number of arg to be passed
* Return: void
*/
void print_numbers(const char *sp, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i != (n - 1))
			printf("%s ", sp);
		else
			printf("\n");
	}
	va_end(l);
}

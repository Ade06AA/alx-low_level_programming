#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
* print_strings - func name
* @sp: func arg 1
 * the seprator
* @n: func arg 2
 * the number of arg to be passed
* Return: void
*/
void print_strings(const char *sp, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i != (n - 1) && sp != NULL)
			printf("%s", sp);
		else
			printf((i != (n - 1)) ? " " : "\n");
	}
	va_end(l);
}

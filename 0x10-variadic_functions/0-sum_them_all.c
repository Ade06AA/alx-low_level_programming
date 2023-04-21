#include <stdarg.h>
/**
* sum_them_all - func name
* @n: func arg 1- type int
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list l;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(l, int);
	}
	va_end(l);
	return (sum);
}

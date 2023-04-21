#include <stdarg.h>
#include <stdio.h>
void i(int g)
{
	printf("%d ", g);
}
void c(char g)
{
	printf("%c ", g);
}
void s(char *g)
{
	printf("%s ", g);
}
void f(float g)
{
	printf("%f ", g);
}
..................................
	typedef struct 
	{
		char c;
	} cal;

/**
* print_all - 
* @fmt:
* Return: void
*/
void print_all(const char * const fmt, ...)
{
	unsigned int i;
	va_list l;
	char * a;
..................................
	va_start(l, fmt);
	i = 0;:w
	while (fmt[i] != '\0')
	{
		while (
	
	i++;
	}


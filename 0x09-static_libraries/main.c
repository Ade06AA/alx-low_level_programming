#include "main.h"
int main()
{
	_puts("\"at the \"\n\t- jj");
	return (0);
}
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _atoi(char *s);
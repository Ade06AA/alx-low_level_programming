#include "main.h"
/**
* _strncat - func name
* func_dis - append n character of func arg 2 to func arg 1
* @dest: func arg 1
* @src: func arg 2
* @n: func arg 3
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}

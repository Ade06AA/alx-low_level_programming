#include "main.h"
/**
* _strcat - func name
* @dest: func arg 1
* @src: func arg 2
* @n: func arg 3
* Return: char
*/
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j <= n; j++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}

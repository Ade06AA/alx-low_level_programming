#include "main.h"
/**
* _strcat - func name
* func_dis - append func arg 1 with func arg 2
* @dest: func arg 1
* @src: func arg 2
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}

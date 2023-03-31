#include "main.h"
/**
* _strcat - func name
* @dest: func arg 1
* @src: func arg 2
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i)!= '\0'; i++);
	for (j = 0; *src != '\0'; j++)
		*(dest + i) = *(src + j);
	return (dest);
}

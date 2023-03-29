#include "main.h"
/**
* rev_string - func name
* @s: func arg 1
* Return: void
*/
void rev_string(char *s)
{
	int i;
	int j;
	char *r;
	char *p;
	char n[];

	j = 0;
	p = n;
	r = s;
	for (i = 0; *r != '\0'; i++)
	{
		r++;
		j++;
	}
	for (i =  j - 1; i >= 0; i--)
		*(p + i) =  *(s + i);
	for (i = j - 1; i >= 0; i--)
		*(s + i) = *(p + j - i - 1);
}


#include "main.h"
/**
* _memset - func name
* @s: func arg 1
* @a: func arg 2
* @b: func arg 3
* Return: d
*/
char *_memset(char *s, char a, unsigned int b)
{
	unsigned int i;

	i = 0;
	while (i < b)
	{
		s[i] = a;
	i++;
	}
	return (s);
}

/**
* _calloc - func arg 1
* @a: func arg 1
* @size: func arg 2
* Return: b
*/
void *_calloc(unsigned int a, unsigned int size)
{
	void *b;

	if (a == 0 || size == 0)
		return (NULL);
	b = malloc(a * size);

	if (b == NULL)
		return (NULL);
	_memset(b, 0, (a * size));
	return (b);
}

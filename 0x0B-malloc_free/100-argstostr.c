#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
* argstostr - func name
* @aac: func arg 1 - int
* @aa: func arg 2 - char
* Return: char
*/
char *argstostr(unsigned int aac, char **aa)
{
	char *m;
	int i, a, j, t, f;

	if (aac == 1)
		return (NULL);

	t = aac;
	for (f = 0; f < aac; f++)
	{
		if (aa[f] == NULL)
			return (NULL);
		for (j = 0; aa[f][j] != '\0'; j++)
		{
			t += 1;
		}
	}
	m = malloc(sizeof(char) * (t + aac));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	a = 0;
	for (i = 0; i < aac; i++)
	{
		for (j = 0; aa[i][j] != '\0'; j++, a++)
		{
		m[a] = aa[i][j];
			if (aa[i][j + 1] == '\0' && aa[i + 1] != '\0')
			{
				a++;
				m[a] = '\n';
			}
		}

	}
	m[a] = '\0';
	return (m);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int a, char **c)
{
	char *s;
	s= argstostr(a,c);
	if (s == NULL)
		printf("Error\n");
	else
		printf("%s\n",s);
	free(s);
	return (0);
}

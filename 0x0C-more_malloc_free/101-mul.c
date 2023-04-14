#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* mul - func name
* @a: func a
* @b: func b
* Return: int
*/
int mul(char *a, char *b)
{
	int c, d;

	c = atoi(a);
	d = atoi(b);
	return (c * d);
}
/**
* is_not_number - func name
* @a: func
* Return: int
*/
int is_not_number(char *a)
{
	int i;

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] < '0' ||  a[i] > '9')
			return (1);
	}
	return (0);
}
/**
* main - func name
* @ac: func arg 1
* @av: func arg 2
* Return: 0
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (98);
	}
	if ((is_not_number(av[1]) || is_not_number(av[2])))
	{
		printf("Error\n");
		return (98);
	}
	printf("%d\n", mul(av[1], av[2]));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
* main - func name
 * a function that prints its own opcodes
* @ac: func arg 1 - type int
 * contains the amount of agruments passed in when running
* @av: func arg 2 - type char *
 * an array containing the value of arg passed in
* Return: 0
*/
int main(int ac, char **av)
{
	int d, i;
	int (*m_p)(int, char **);
	char *sp;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	d = atoi(av[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m_p = &main;
	sp = (char *)m_p;
	i = 0;
	while (i < d)
	{
		(i != (d - 1)) ? (printf("%02hhx ", sp[i])) : (printf("%02hhx\n", sp[i]));
		if (i == (d - 1))
			break;
		i++;
	}
	return (0);
}

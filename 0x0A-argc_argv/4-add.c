#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - func name - function add the value of arg 2 together
* @argc: func arg 1 - int - its val is the num of arg passed when running
* @argv: func arg 2 - char** - contains the val of the arg passed when running
* Return: 0
*/
int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int l;

	i = argc;
	while (--i)
	{
		l = strlen(argv[i]);
		for (k = 0; k < l; k++)
		{
			if (argv[i][k] >= '0' && argv[i][k] <= '9')
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	j = 0;
	for (i = 0; i < argc; ++i)
	{
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}

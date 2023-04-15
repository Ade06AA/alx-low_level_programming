#include <stdio.h>
#include <stdlib.h>
/**
* filter - func name
* @argc: func arg 1
* @v: func arg 2
* Return: 0
*/
int filter(int argc, int v)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (v  < 0)
	{
		putchar('0');
		putchar('\n');
		exit(1);
	}
	return (0);
}

/**
* main - func name
* @argc: func arg 1
* @argv: func arg 2
* Return: 0 if sucesfull
*/
int main(int argc, char **argv)
{
	int i, v, m;

	i = 0;
	if (argc != 1)
		v = atoi(argv[1]);
	else
		v = 0;
	filter(argc, v);
	for (m = 0; v != 0; m++)
	{
		i += 1;
		if (v >= 25)
		{
			v = v - 25;
			continue;
		}
		if (v >= 10)
		{
			v = v - 10;
			continue;
		}
		if (v >= 5)
		{
			v = v - 5;
			continue;
		}
		if (v >= 2)
		{
			v = v - 2;
			continue;
		}
		else
			v = v - 1;
	}
	printf("%d\n", i);
	return (0);
}

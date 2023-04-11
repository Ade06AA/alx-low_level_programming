#include <stdio.h>
#include <stdlib.h>
/**
* main - func name
* @argc: func arg 1
* @argv: func arg 2
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

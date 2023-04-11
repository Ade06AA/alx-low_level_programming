#include <stdio.h>
/**
* main - func name
* @argc: func arg 1
* @argv: func arg 2
* Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}

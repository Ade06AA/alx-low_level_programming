#include <stdio.h>
/**
* main - func name
* @argc: func arg 1
* @argv: func arg 2
* Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

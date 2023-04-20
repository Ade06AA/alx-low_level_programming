#include "3-calc.h"
/*i*
* main - func name
* @ac: func arg 1 - type int
 * amount of arg
* @av: func arg 2 - type char **
 * arg value
* Return: int
*/
int main(int ac, char **av)
{
	int a, b;

	if ((ac != 4) || (av[2][1] != '\0'))
	{
		putchar('v');
		printf("Error\n");
		return (-1);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	int (*ade)(int, int) = get_op_func(av[2]);

	if (ade != NULL)
		printf("%d\n",ade(a, b));
	else
		printf("Error\n");
}

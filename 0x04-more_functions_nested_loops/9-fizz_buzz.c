#include <stdio.h>
/**
* main - func name
* Return: 1
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		putchar(' ');
	}
	putchar('\n');
	return (1);
}

#include <stdio.h>
/**
* main - my main
* Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			if (i == j || j < i)
				continue;
			else
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i < 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}

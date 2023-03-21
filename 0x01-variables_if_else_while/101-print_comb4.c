#include <stdio.h>
/**
* main - my main
* Return: 0
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <  10; i++)
		for (j = 0; j < 10; j++)
			for (k = 0; k < 10; k++)
			{
				if (i == j || i == k || j == k || i > j || j > k)
					continue;
				else
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i < 7)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - my main fnc
* Return: 0
*/
int main(void)
{
	int i;
	char s[16] = "0123456789abcdef";
	char k;

	for (i = 0; i < 16; i++)
	{
		k = s[i];
		putchar(k);
	}
	putchar('\n');
	return (0);
}

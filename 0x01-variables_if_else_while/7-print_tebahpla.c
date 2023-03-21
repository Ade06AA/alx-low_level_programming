#include <stdio.h>
/**
* main - my main
* Return: 0
*/
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char s;

	for (i = 25; i >= 0; i--)
	{
		s = a[i];
		putchar(s);
	}
	putchar('\n');
	return (0);
}

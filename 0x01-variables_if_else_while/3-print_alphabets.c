#include <stdio.h>
/**
* main - my main
* Return: 0
*/
int main(void)
{
	char al[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	char p;
	char s = '\n';

	for (i = 0 ; i < 52 ; i++)
	{
		p = al[i];
		putchar(p);
	}
		putchar(s);
	return (0);
}

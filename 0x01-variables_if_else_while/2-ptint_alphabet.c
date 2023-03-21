#include <stdio.h>
/**
* main - my main
* Return: 0
*/
int main(void)
{
	char al[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char p;
	char s = '\n';

	for (i = 0 ; i < 26 ; i++)
	{
		p = al[i];
		putchar(p);
	}
		putchar(s);
	return (0);
}

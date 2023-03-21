#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - nnn
* Return: 0
* description - a description
*/
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

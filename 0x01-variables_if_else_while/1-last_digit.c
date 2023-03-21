#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - a main
* description : a description
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_dg = n % 10;

	if (last_dg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dg);
	if (last_dg == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dg);
	if (last_dg < 6 && last_dg != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dg);
	return (0);
}


#include "main.h"
/**
* array_range - func name
* @min: func arg 1
* @max: func arg 2
* Return: a
*/
int *array_range(int min, int max)
{
	int *a,
	int i = 0,
	int t = min;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		a[i++] = t++;
	return (a);
}

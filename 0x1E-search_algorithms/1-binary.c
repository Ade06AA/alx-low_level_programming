#include "search_algos.h"

/**
* binary_search - use binary search to find a string
* @array: the array to be searched
* @size: size of the array
* @value: the value to search for
* Return: first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	/* c for center */
	size_t c, t;

	if (!array || size < 0)
		return (-1);
	printf("Searching in array:");
	for (c = 0; c < size; c++)
	{
		printf(" %d", array[c]);
		if (c == size - 1)
			printf("\n");
		else
			printf(",");
	}
	printf("val = %d\n", value);

	c = (size % 2 == 0) ? size / 2 - 1: size / 2;

	printf("c = %d /2 = %d, ===== %d\n",size, size / 2, array[c]);
	if (value == array[c] || size == 1)
	{
		return ((value == array[c]) ? c : -1);
	}
	else if (value > array[c])
	{
		if (size % 2 == 0)
			return((binary_search(array + c + 1, c + 1,value) != -1) ? 1 + c + binary_search(array + c + 1, c + 1,value) : -1);
		else
			return((binary_search(array + c + 1, c,value) != -1) ? 1 + c + binary_search(array + c + 1, c,value) : -1);
	}
	else
	{
		if (size % 2 == 0)
			return(binary_search(array, c,value));
		else
			return(binary_search(array, c - 1,value));
	}

	return (-1);
}

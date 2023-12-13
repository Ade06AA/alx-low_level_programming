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
	ssize_t c, t;

	if (!array)
		return (-1);
	printf("Searching in array:");
	for (c = 0; c < (ssize_t)size; c++)
	{
		printf(" %d", array[c]);
		if (c == (ssize_t)size - 1)
			printf("\n");
		else
			printf(",");
	}
	c = (size % 2 == 0) ? size / 2 - 1 : size / 2;
	if (value == array[c] || size == 1)
	{
		return ((value == array[c]) ? c : -1);
	}
	else if (value > array[c])
	{
		if (size % 2 == 0)
		{
			t = binary_search(array + c + 1, c + 1, value);
			return ((t != -1) ? 1 + c + t : -1);
		}
		else
		{
			t = binary_search(array + c + 1, c, value);
			return ((t != -1) ? 1 + c + t : -1);
		}
	}
	else
	{
		if (size % 2 == 0)
			return ((c == 0) ? -1 : binary_search(array, c, value));
		else
			return ((c == 1) ? -1 : binary_search(array, c, value));
	}
	return (-1);
}

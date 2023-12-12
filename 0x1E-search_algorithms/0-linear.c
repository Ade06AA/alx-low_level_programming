#include "search_algos.h"

/**
* linear_search - use linear search to find a string
* @array: the array to be searched
* @size: size of the array
* @value: the value to search for
* Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if !(array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

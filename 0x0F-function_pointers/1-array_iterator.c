#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator - func name
 * iterates an array while aplying a prticular function
* @array: func arg 1 - type int *
 * the array to be iterated
* @size: func arg 2 - type size_t
 * size of the array
* @action: func arg 3 - type pointer to function
 * fpointer to function that will be applied to the array
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

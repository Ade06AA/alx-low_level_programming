/**
* int_index - func name
 * the function find the first maching patern of a funtion in an array
* @array: func arg 1 - type int *
 * the array to be cheked
* @size: func arg 2 - type int
 * size of array
* @cmp: func ag 3 - type fpointer to a function
 * pointer to te function to be used
* Return:  -1 if nothing match - type int
 * return the index of the first element that match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			return (-1);
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

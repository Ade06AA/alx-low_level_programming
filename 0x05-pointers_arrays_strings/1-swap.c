/**
* swap_int - func name
* @a: func arg 1 - arg to be swaped with arg 2
* @b: func arg 2 - arg to be swaped with arg 1
* Return: void
*/
void swap_int(int *a, int *b)
{
	int f;

	f = *b;
	*b = *a;
	*a = f;
}

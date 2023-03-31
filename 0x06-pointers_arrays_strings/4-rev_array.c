/**
* reverse_array - func name
* @a: func arg 1
* @n: func arg 2
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int g[6556];
	int *m;

	m = g;
	for (i = 0; i < n; i++)
		*(m + i) = *(a + i);
	for (i = 0; i < n; i++)
		*(a + i) = *(m + (n - i - 1));
}

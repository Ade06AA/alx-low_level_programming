/**
* sr - func name
* @n: func arg 1
* @c: func arg 2
* Return: int
*/
int sr(int n, int c)
{
	if ((c * c) == n)
		return (c);
	if (c > n)
		return (-1);
	return (sr(n, c + 1));
}
/**
* _sqrt_recursion - func name
* @n: func arg 1
* Return: int
*/
int _sqrt_recursion(int n)
{
	int k;

	if (n == 1)
		k = 1;
	else
		k = 2;
	return (sr(n, k));
}

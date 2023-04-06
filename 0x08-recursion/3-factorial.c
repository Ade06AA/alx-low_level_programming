/**
* factorial - func name
* @n: func arg 1
* Return: int - factorial of arg 1
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return ((n == 1) ? 1 : (factorial(n - 1) * n));
}

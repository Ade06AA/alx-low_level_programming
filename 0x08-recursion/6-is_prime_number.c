/**
* prime - func name
* @n: func arg 1
* @c: func arg 2
* Return: int
*/
int prime(int n, int c)
{
	if (n % c == 0 && c != n)
		return (0);
	return ((n % c == 0) ? 1 : prime(n, c + 1));
}
/**
* is_prime_number - func name
* @n: func arg 1
* Return: int
*/
int is_prime_number(int n)
{
	int k;

	k = 2;
	return (prime(n, k));
}

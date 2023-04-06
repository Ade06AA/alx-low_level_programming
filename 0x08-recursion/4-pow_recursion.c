/**
* _pow_recursion - func name
* @x: func arg 1
* @y: func arg 2
* Return: int -
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}

/**
* _strlen - func name ..to get lent os a string
* @*s: func arg 1 - pointer of str to be assessed
* Return: lent of str arg 1
*/
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		++l;
		s += 1;
	}
	return l;
}

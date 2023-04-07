/**
* len - func name
* @s: func arg 1
* Return: int
*/
int len(char *s);
/**
* pal - func name
* @s: func arg 1
* @t: func arg 2
* Return: int
*/
int pal(char *s, int t);
/**
* is_palindrome - func name
* @s: func arg 1
* Return: int
*/
int is_palindrome(char *s)
{
	int l;

	l = len(s);
	return (pal(s, l));
}
/**
* pal - func name
* @s: func arg 1
* @t: func arg 2
* Return: int
*/
int pal(char *s, int t)
{
	int g;

	g = *(s + t - 1);
	if (*s == '\0')
		return (1);
	if (*s != g)
		return (0);
	else
		return (pal(s + 1, t - 2));
}

/**
* len - func name
* @s: func arg 1
* Return: int
*/
int len(char *s)
{
	return ((*s == '\0') ? 0 : (1 + len(s + 1)));
}

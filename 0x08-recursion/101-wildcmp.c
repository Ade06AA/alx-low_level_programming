/**
* wildcmp - func name
* @s1: func arg 1
* @s2: func arg 2
* Return: int
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (wildcmp(s1, (s2 + 1)));
		if (*s2 == '\0')
			return (1);
	}
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	return (0);
}


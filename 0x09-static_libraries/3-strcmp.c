/**
* _strcmp - func name
* @s1: func arg 1
* @s2: func arg 2
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	r = 100;
	for (i = 0; ; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			if (*(s1 + i) > *(s2 + i))
			{
				r = 1;
				break;
			}
			else if (*(s1 + i) < *(s2 + i))
			{
				r = (-1);
				break;
			}
		}
		else
			r = 0;
	}
	return (r);
}

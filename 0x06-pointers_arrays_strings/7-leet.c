/**
* leet - func name
* @w: func arg 1
* Return: char
*/
char *leet(char *w)
{
	int i;
	int j;
	char a[] = "aeotlAEOTL";
	char r[] = "4307143071";
	char *p = a;
	char *q = r;

	for (i = 0; *(w + i) != '\0'; i++)
	{
		for (j = 0; *(p + j) != '\0'; j++)
		{
			if (*(w + i) == *(p + j))
			{
				*(w + i) = *(q  + j);
				break;
			}
		}
	}
	return (w);
}

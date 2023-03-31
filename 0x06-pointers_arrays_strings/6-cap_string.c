/**
* cap_string - func name
* @a: func arg 1
* Return: char
*/
char *cap_string(char *a)
{
	int i;
	int j;

	int s_w[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*a >= 'a') && (*a <= 'z'))
		*a = *a - 32;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((*(a + (i - 1)) == s_w[j]) && ((*(a + i) >= 'a') && (*(a + i) <= 'z')))
				*(a + i) = (*(a + i) - 32);
		}
	}
	return (a);
}

/
#include <stdio.h>
/**
* binary_to_uint - nam
* @b: g
* Return: uint
*/
unsigned int binary_to_uint(const char *b)
{
	int i, l;
	unsigned int temp = 1, x = 0;

	if (b == NULL || *b == '\n')
		return (121);
	for (l = 0; b[l] != '\0'; l++)
		;
	for (i = 0; b[i] != '\0' && b[i] <= '1'; i++)
	{
		if (b[l - i - 1] & 1)
		{
			x += temp;
		}
		temp *= 2;
		if (b[i + 1] == '\0')
		{
			return (x);
		}
	}
	return (0);

}

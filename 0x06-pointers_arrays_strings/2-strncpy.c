/**
* _strncpy - func name
* @dest: func arg 1
* @src: func arg 2
* @n: func arg 3
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

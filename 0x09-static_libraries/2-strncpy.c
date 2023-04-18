/**
* _strncpy - func name
* fun_des - copy char content of func arg 2 to arg 1
* @dest: func arg 1
* @src: func arg 2
* @n: func arg 3
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

#include <unistd.h>

/**
* _putchar -
* @c: The char
*
* Return: 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}


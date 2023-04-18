#include "main.h"
/**
* main - my main
* Return: 0
*/
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + 48);
	r = _isalpha('o');
	_putchar(r + 48);
	r = _isalpha(108);
	_putchar(r + 48);
	r = _isalpha(';');
	_putchar(r + 48);
	_putchar('\n');
	return (0);
}

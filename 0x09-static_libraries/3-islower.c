#include "main.h"
/**
* main - my main
* Return: 0
*/
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + 48);
	r = _islower('o');
	_putchar(r + 48);
	r = _islower(108);
	_putchar(r + 48);
	_putchar('\n');
	return (0);
}

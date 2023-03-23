int _putchar(char c);

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; ++i)
		print_alphabet();
}


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
	       return (0);
	return (-1);
}


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}


int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
		_putchar(45);
		return (-1);

}


int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}


int print_last_digit(int t)
{
	int l;

	l = t % 10;
	_putchar(l + 48);
	return (l);
}


void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 26; i++)
		for (j = 0; j < 60; j++)
		{
			int a, b, c, d;
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(':');
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar('\n');
			if (i == 23 && j == 59)
				break;
		}
}


void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int p;
			p = i * j;
			_putchar(p + 48);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('n');
	}
}


int add(int a, int b)
{
	return (a + b);
}

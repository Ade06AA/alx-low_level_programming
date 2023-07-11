#include "main.h"

/**
* read_textfile - n
* @fn: n
* @l: n
* Return: n
*/
ssize_t read_textfile(const char *fn, size_t l)
{
	int fp;
	char *buf;
	ssize_t e, j;

	if (fp = open(fn, O_RDONLY) == -1)
		return (0);
	buf = malloc(sizeof(char) * l + 1);
	if (!buf)
		return (0);
	if (e = read(fp, buf, l) == -1)
		return (0);
	if (j = write(STDIN_FILENO, buf, l) == -1)
		return (0);
	return (j);
}


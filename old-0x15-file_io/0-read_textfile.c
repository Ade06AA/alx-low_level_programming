#include "main.h"
/**
* read_textfile - func name
 * a function that reads a text file and prints it to POSIX standard output
* @fn: func arg 1
 * the file name
* @nl: func arg 2
 * amount of letters to be printed
* Return: ssize_t
 * total number of letters it was able to prnt
*/
ssize_t read_textfile(const char *fn, size_t nl)
{
	ssize_t i, c;
	int t;
	char *buffer;

	t = open(fn,O_RDWR);
	if (t < 0)
		return (0);
	i = 0;
	buffer = malloc(sizeof(char) * nl);
	c = read(t, buffer, nl);
	while (c--)
	{
		write(STDOUT_FILENO, (buffer + i++), 1);
	}
	close(t);
	free(buffer);
	return (i);
}

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
	int c;
	ssize_t i, t;
	char *buffer;

	c = open(fn,O_RDWR);
	if (c < 0)
		return (0);
	i = 0;
	buffer = malloc(sizeof(char) * nl);
	i=read(c, buffer, nl);
		t=write(STDOUT_FILENO, buffer, i);
	close(c);
	free(buffer);
	return (t);
}

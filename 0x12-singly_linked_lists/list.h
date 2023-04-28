#ifndef aa
#define aa
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* struct list_s - sl
* @str: str
* @len: len
* @next: next
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif

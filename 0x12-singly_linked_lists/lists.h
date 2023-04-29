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
size_t list_len(const list_t *h);
list_t *add_node(list_t **h, const char *str);
list_t *add_node_end(list_t **h, const char *str);
void free_list(list_t *h);
#endif

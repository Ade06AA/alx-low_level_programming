#include "lists.h"
/**
* print_list - func name
* @h: func arg 1
* Return: a
*/
size_t print_list(const list_t *h)
{
	int l;
	char *s;
	size_t a = 0;

	while (h != NULL)
	{
		s = h->str;
		l = (s == NULL) ? 0 : h->len;
		s = (s == NULL) ? "(nill)" : s;
		printf("[%d] %s\n", l, s);
		h = h->next;
		a++;
	}
	return (a);
}

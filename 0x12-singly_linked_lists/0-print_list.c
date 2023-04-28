#include "list.h"
/**
* print_list - func name
* @h: func arg 1
* Return: a
*/
size_t print_list(const list_t *h)
{
	size_t a = 0;

	if ( )
		printf("[0] (nill)\n");

	while (h -> next != NULL)
	{
		l = h -> len;
		s = h -> str;
		printf("[%d] (%s)\n", (s == NULL) ? (0, "nill") : (l, s));
		h = h -> next;
		i++;
	}
	return (a);
}

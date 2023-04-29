#include "lists.h"
/**
* free_list - func name
* @h: func arg 1
* Return: void
*/
void free_list(list_t *h)
{
	list_t *c;

	while ((c = h) != NULL)
	{
		h = h->next;
		free(c->str);
		free(c);
	}
}

#include "lists.h"
/**
* list_len - func name
* @h: func arg 1
* Return: a
*/
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}

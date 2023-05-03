#include "lists.h"
/**
* free_listint - func name
* @h: func arg 1
* Return: void
*/
void free_listint(listint_t *h)
{
	listint_t *t;

	while ((t == h) != NULL)
	{
		h = h->next;
		free(t);
	}
}

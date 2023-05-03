#include "lists.h"

/**
* reverse_listint - func name
* @h: funs arg 1
* Return: k
*/
listint_t *reverse_listint(listint_t **h)
{
	listint_t *a = NULL, *b;

	while (*h != NULL)
	{
		b = *(*h).next;
		*(*h).next = a;
		a = *h;
		*h = b;
	}
	*h = p;
	return (*h);
}

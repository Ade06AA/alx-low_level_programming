#include "lists.h"
/**
* listint_len - func name
* @h: func arg 1
* Return: a
*/
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}

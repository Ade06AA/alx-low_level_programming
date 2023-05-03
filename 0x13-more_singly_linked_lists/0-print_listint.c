#include "lists.h"
/**
* print_listint - func name
* @h: func arg 1
* Return: a
*/
size_t print_listint(const listint_t *h)
{
	int l;
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

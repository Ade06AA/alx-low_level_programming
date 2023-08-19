#include "lists.h"
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}

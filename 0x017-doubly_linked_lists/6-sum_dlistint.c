#include "lists.h"
/**
* sum_dlistint - func name
* @h: head
* Return: int
*/
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

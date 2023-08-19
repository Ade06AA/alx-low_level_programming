#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i;

	temp = *h;
	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	for (i = 0; (i + 1) != idx; i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
	}
	new->next = temp->next;
	temp->next->prev = new;
	new->prex = temp;
	temp->next = new;
	return (new);
}

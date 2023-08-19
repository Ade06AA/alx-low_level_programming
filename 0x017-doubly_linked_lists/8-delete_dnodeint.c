#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (0);
	for (i = 0; i != index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (0);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

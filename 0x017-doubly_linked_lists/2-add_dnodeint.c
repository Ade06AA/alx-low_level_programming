#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (*head != NULL)
		(*head)->prev = temp;
	temp->next = *head;
	temp->prev = NULL;
	temp->n = n;
	*head = temp;
	return (*head);
}

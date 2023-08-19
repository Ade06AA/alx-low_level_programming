#include "lists.h"
/**
* add_dnodeint_end - func name
* @head: list head
* @n: new value
* Return: head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (*head);
}

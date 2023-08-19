#include "lists.h"
/**
* delete_dnodeint_at_index - func name
* @head: list head
* @index: index to delete
* Return: -1 or 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	for (i = 0; i != index; i++)
	{
		if (temp != NULL)
			temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	if (temp == *head)
		*head = temp->next;
	temp->prev = NULL;
	free(temp);
	temp = NULL;
	return (1);
}

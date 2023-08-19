#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
* @head: the list head
* Return: NULL
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

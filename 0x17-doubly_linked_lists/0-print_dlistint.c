#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - a function that prints out the content of
 * of a doubly nlinked list
* @h: the head of the doubly linked list
* Return: i - the amount of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	temp = h;
	if (h == NULL)
		return (0);
	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}

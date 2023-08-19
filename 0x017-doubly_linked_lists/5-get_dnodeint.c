#include "lists.h"
/**
* get_dnodeint_at_index - func name
* @h: head
* @index: the index starting from 0
* Return: the node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	unsigned int i;

	if (h == NULL)
		return (NULL);
	for (i = 0; i != index; i++)
	{
		h = h->next;
		if (h ==NULL)
			return (NULL);
	}
	return (h);
}

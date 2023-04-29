#include "lists.h"
/**
* add_node_end - func name
* @t: func arg 1
* @st: func arg 2
* Return: i
*/
list_t *add_node_end(list_t **t, const char *st)
{
	list_t *tp, *h;

	tp = malloc(sizeof(list_t));
	if (tp == NULL)
		return (NULL);
	tp->str = strdup(st);
	tp->next = NULL;
	tp->len = strlen(st);
	h = *t;
	if (h == NULL)
	{
		*t = tp;
		return (tp);
	}

	else
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = tp;
	return (*t);
}

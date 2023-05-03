#include "lists.h"
/**
* add_node - func name
* @t: func arg 1
* @st: func arg 2
* Return: tp
*/
listint_t *add_node(list_t **t, const int *st)
{
	list_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);
	tp->n = st;
	tp->next = *t;
	*t = tp;
	return (tp);
}

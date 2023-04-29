#include "lists.h"
/**
* add_node - func name
* @t: func arg 1
* @st: func arg 2
* Return: tp
*/
list_t *add_node(list_t **t, const char *st)
{
	list_t *tp;

	tp = malloc(sizeof(list_t));
	if (tp == NULL)
		return (NULL);
	tp->str = strdup(st);
	tp->next = *t;
	tp->len = strlen(st);
	*t = tp;
	return (tp);
}

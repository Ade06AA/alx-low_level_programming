#include "lists.h"

/**
* find_listint_loop - func name
* @h: func arg 1
* Return: p->next
*/
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *p, *pr;

	p = h;
	pr = h;
	while (h && p && p->next)
	{
		h = h->next;
		p = p->next->next;

		if (h == p)
		{
			h = pr;
			pr =  p;
			while (1 < 2)
			{
				p = pr;
				while (p->next != h && p->next != pr)
				{
					p = p->next;
				}
				if (p->next == h)
					break;

				h = h->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}

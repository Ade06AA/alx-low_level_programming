#include <stddef.h>
#include "3-calc.h"
/**
*/
int (*get_op_func(char *f))(int, int)
{
	op_t t[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	putchar('l');
	int i;
	while (t[i].op)
	{
		putchar('h');

		if (strcmp(t[i].op, f) == 0)
			return (t[i].f);
		putchar('s');
		i++;
	}
}	

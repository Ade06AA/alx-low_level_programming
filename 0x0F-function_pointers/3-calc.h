#ifndef mn
#define mn
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
* struct op - struct
* @op: the operator
* @f: the function associated
*/
struct op
{
	char *op;
	int (*f)(int a, int b);
};
typedef struct op op_t;
int (*get_op_func(char *s))(int,int);
int op_sub(int,int);
int op_add(int,int);
int op_mul(int,int);
int op_div(int,int);
int op_mod(int,int);
#endif

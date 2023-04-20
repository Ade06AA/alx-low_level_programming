/**
* print_name - func name
 * this function pass a name to a refrnced function while colling the function
* @name: func arg 1 - type char *
 * name to be passed into the refrenced function
* @f: func arg 2 - type function pointer
 * pointer to the refrence function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

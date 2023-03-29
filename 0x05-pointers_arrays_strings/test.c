#include <stdio.h>
#include "main.h"
int main(void)
{
	char a[] = "poiuytrewq";
	char *m;

	m = a;
	printf("%s \n",a);
	rev_string(m);
	printf("%s \n",a);
	return (1);
}


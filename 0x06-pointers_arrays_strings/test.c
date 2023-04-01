#include "main.h"
#include <stdio.h>
int main()
{
	char s1[]="aasssstTjj S ff g,yhh";
	char s2[]="ssssawrtgdddd\n";
	printf("%d\n", _strcmp(s1, s2));
	printf("%s\n", s1);
	rot13(s1);
	printf("%s\n", s1);
	print_number(789);
	putchar('\n');
	return (1);
}

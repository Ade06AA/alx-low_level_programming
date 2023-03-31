#include "main.h"
#include <stdio.h>
int main()
{
	char s1[]="sssssssjj S ff g,yhh";
	char s2[]="ssssawrtgdddd\n";
	char *ptr;
	printf("%d\n", _strcmp(s1, s2));
	printf("%s\n", s1);
	ptr=_strncpy(s1,s2,3);
	cap_string(s1);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	return (1);
}

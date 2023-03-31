#include "main.h"
#include <stdio.h>
int main()
{
	char s1[]="ssssh";
	char s2[]="wrtgdddd\n";
	char *ptr;
	printf("%s\n", s1);
	ptr=*_strcat(s1,s2);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	return (1);
}

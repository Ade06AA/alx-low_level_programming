#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
* print_dog - func name
 * this function prints dog
* @d: func arg 1
 * a pointer to dog to be printed
* Return: void
*/
void print_dog(Dog *d)
{
	if (d == NULL)
		return;
	printf("Name:");
	printf("%s\n", (d->name == NULL || d->name == 0) ? "(nil)" : d->name);

	if (&(d->age) == NULL || d->age == 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner:");
	printf("%s\n", (d->owner == NULL || d->owner == 0) ? "(nil)" : d->owner);
}

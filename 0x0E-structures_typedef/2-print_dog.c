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
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name:");
		printf("%s\n", d->name);
	}

	if (&(d->age) == NULL || d->age == 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: ");
		printf("%s\n", d->owner);
	}
}

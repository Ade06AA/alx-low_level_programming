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
	printf("Name: %s\n", (*d).name == NULL ? "nill" : "ade");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
/**
* free_dog - func name
 *free dog
* @d: func arg 1
 * the dog to be freed
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d-owner);
		free(d);
	}
}

#include <string.h>
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* new_dog - func name
 * a function to make a new dog
* @name: func arg 1 - type char *
 * the name of the dog
* @age: func arg 2
 * the age of the dog
* @owner: func arg 3
 * the name of the owner of the dog
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	n_name = malloc(sizeof(name));
	if (n_name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	strcpy(n_name, name);
	n_owner = malloc(sizeof(owner));
	if (n_owner == NULL)
	{
		free(n_name);
		free(n_dog);
		return (NULL);
	}
	strcpy(n_owner, owner);
	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;
	return (n_dog);
}

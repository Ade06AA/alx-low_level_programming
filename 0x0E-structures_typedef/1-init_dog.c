#include "dog.h"
/**
* init_dog - func name
 * this function is used to initialize a struct
* @d: func arg 1 - type Dog
 * it is a pointer to the structure to be initialized
 * and it is of type struct dog whic is also Dog
* @name: func arg 2 - type char *
 * this is a pointer to the name that arg 1 will be initialised as
* @age: func arg 3 - type float
 * this is the age arg 1 will be initialised as
* @owner: func arg 4 - type char *
 * this is a pointer to the name of the owner that arg 1 will be initialised as
* Return: void
*/
void init_dog(Dog *d, char *name, float age, char *owner)
{
	*d = (Dog) {name, age, owner};
}



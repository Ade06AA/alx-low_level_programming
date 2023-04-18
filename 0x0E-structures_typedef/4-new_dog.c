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
	dog_t *n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}

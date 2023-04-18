#ifndef D
#define D
/**
* struct dog - struct name
 * structure of a dog
* @name: struct item 1 - char *n
 * dogs name
* @age: struct item 2 - float
 * dogs age
* @owner: struct item 3 - char *n
 * dogs owners name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* Dog - typedef for struct dog
*/
typedef struct dog Dog;
void init_dog(Dog *d, char *name, float age, char *owner);
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void print_dog(Dog *d);
#endif

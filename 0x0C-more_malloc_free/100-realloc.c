#include <stdlib.h>
#include <string.h>
/**
* _realloc - func name
* @ptr: func arg 1
* @old_size: func arg 2
* @new_size: func arg 3
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r;
	r = malloc(new_size - old_size);

	if (old_size == new_size)
		return ptr;
	if (ptr == NULL)
		return malloc(new_size);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size > new_size)
		memcpy(r, ptr, new_size);
	else
		memcpy(r, ptr, old_size);
	free(ptr);
	return r;
}

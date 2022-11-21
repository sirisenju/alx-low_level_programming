#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory of structure dogs
 * @d: pointer of struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

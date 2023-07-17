#include"main.h"
#include<stdlib.h>

/**
 * free_dog - A function that frees dogs
 *
 * @d: yo dawg
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

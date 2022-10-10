#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len;
	char *new;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	for (len = 1, new = name; *new; len++)
		new++;
	d->name = malloc(len);

	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}
	for (len = 1, new = owner; *new; len++)
		new++;
	d->owner = malloc(len);

	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (len = 0; *name != 0; len++, name++)
		d->name[len] = *name;
	d->name[len] = 0;

	for (len = 0; *owner != 0; len++)
		d->owner[len] = *owner++;
	d->owner[len] = 0;
	d->age = age;

	return (d);
}

#include <stdio.h>
#include "dog.h"

/**
* init_dog -> prints a struct dog
* @d: pointer to structure
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

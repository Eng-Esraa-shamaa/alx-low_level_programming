#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *free_dog - function frees a dog
 *@d: the dog
 *Return: zero
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

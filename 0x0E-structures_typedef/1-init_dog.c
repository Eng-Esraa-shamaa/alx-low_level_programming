#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *init_dog - initialize a variable of type struct
 *@d: name of struct
 *@name: name of dog
 *@age: age of dog
 *@owner: the owner of dog
 *Return: zero when success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

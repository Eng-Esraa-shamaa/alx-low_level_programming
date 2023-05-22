#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 *_strlen - used to get length of string
 *@s: the string
 *Return: string length when success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 *_strcpy - copy src into dest
 *@dest: the destination string
 *@src: the source
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
/**
 *new_dog - function creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int length1;
	int length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1->name = malloc(sizeof(char) * (length1 + 1));
	dog1->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog1->name == NULL)
	{
	free(dog1);
	return (NULL);
	}
	if (dog1->owner == NULL)
	{
	free(dog1);
	free(dog1->name);
	return (NULL);
	}
	_strcpy(dog1->name, name);
	_strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}

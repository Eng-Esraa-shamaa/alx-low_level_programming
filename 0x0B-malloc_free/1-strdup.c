#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - return a pointer to new alloc mem
 *@str: the string to be filled into
 *Return: 0 success
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	free(s);
	return (s);
}

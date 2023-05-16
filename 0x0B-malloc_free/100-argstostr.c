#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *argstostr - function that concatenates all the arguments
 *@ac: first parameter
 *@av: second parameter
 *Return: zero when success
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, x = 0, length = 0;
	char *s;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}
	length = length + ac + 1;
	s = malloc(sizeof(char) * length);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		s[x] = av[i][j];
		x++;
		}
		if (s[x] == '\0')
			s[x++] = '\n';
	}
return (s);
}

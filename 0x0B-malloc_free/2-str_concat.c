#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *str_concat - concatenats two strings
 *@s1: the first string
 *@s2: the socnd string
 *Return: zero if success
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	x = i + j;
	s = malloc(sizeof(char) * (x + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);

}

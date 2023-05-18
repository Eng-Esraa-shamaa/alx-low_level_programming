#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: number of bytes
 *Return: zero as success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, m = 0, length;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
	{
		length = i + j;
	}
	else
	{
		length = i + n;
	}
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (m < length)
	{
		if (m <= i)
			s[m] = s1[m];
		if (m >= i)
		{
			s[m] = s2[j];
			j++;
		}
		m++;
	}
	s[m] = '\0';
	return (s);
}

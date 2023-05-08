#include "main.h"
/**
 *_strspn - get a length of prefix substring
 *@s: the main string
 *@accept: the string to be checked
 *Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				m++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (m);
		}
	}
	return (m);
}

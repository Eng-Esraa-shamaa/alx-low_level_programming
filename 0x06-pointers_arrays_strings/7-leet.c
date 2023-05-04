#include "main.h"
/**
 *leet - encodes the string
 *@s: string to be encoded
 *Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (s[i] == str1[j])
		{
			s[i] = str2[j];
		}
	}
}
return (s);
}

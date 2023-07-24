#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string we searched into
 *@needle: string we search for
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while ((*p1 == *p2) && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
	}
	return (0);
}

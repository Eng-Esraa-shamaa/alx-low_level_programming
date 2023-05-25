#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 *print_strings - function prints strings
 *@separator: separator between chars
 *@n: the number of args
 *Return: the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		if (s == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(s, char *));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(s);
	printf("\n");
}

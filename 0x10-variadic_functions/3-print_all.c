#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 *print_all - function prints anything
 *@format: the list of types of arguments
 *Return: zero when success
 */
void print_all(const char * const format, ...)
{
	va_list typ;
	char *separator = "";
	char *st;
	int i = 0;

	va_start(typ, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(typ, int));
						break;
			case 'i':
				printf("%s%d", separator, va_arg(typ, int));
					break;
			case 'f':
				printf("%s%f", separator, va_arg(typ, double));
					break;
			case 's':
				st = va_arg(typ, char*);
				if (st == NULL)
				{
				printf("(nil)");
				}
				else
				{
				printf("%s%s", separator, st);
				}
				break;
			default:
			i++;
			continue;
		}
		i++;
		separator = ", ";
	}
	va_end(typ);
	printf("\n");
}

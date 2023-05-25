#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 *sum_them_all - sums all the arguments
 *@n: number of arguments that should be pases
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int i;
	unsigned int sum = 0;

	va_start(app, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(app, int);
	}
	va_end(app);
	return (sum);
}

#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_name - function prints a name
 *@name: name that printed
 *@f :pointer to a function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}

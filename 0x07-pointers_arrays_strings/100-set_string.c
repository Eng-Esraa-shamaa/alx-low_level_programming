#include "main.h"
/**
 *set_string - sets the value of a pointer to a char
 *@s: the value of the pointer
 *@to: the character to it
 *Return: zero for success
 */
void set_string(char **s, char *to)
{
	*s = to;
}

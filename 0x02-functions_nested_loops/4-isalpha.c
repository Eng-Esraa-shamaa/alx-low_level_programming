#include "main.h"
/**
 *_isalpha - main function of the program
 *@c :character in ascii for checking
 *Description: checks the character
 *Return:one or zero
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
*_islower - the main function of the program
*Description: function check the letter
*@c: in ascii to checks if it is capital or small
*Return:zero or one
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

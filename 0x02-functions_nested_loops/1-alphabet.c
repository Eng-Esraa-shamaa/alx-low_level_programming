#include "main.h"
/**
 *main -  main function of the program
 *Description: used to print lowercase alphabet
 *Return: program returns zero
 */
void print_alphabet(void)
{
	char lalphabet;

	for (lalphabet = 'a'; lalphabet <= 'z'; lalphabet++)
	{
		_putchar(lalphabet);
	}
	_putchar('\n');
}

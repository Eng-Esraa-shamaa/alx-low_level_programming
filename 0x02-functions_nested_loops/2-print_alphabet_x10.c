#include "main.h"
/**
 *print_alphabet_x10 - main functio nof the program
 *Description: print alphabet ten times
 *Return: returns zero
 */
void print_alphabet_x10(void)
{
	char j, lalphabet;

for (j = '0'; j <= '9'; j++)
{
for (lalphabet = 'a'; lalphabet <= 'z'; lalphabet++)
{
	_putchar(lalphabet);
}
_putchar('\n');
}
}

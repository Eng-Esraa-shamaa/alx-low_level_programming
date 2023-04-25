#include "main.h"
/**
 *jack_bauer - the main function of the program
 *Description: prints every minute of the day of Jack Bauer
 *Return: no return as void
 */
void jack_bauer(void)
{
int x, y, z, m;

for (x = 0; x <= 2; x++)
{
for ( y = 0; y <= 9; y++)
{
if (( x <= 1 && y <= 9) || (x <= 2 && y <= 3))
{
for ( z = 0 ; z <= 5; z++)
{
for ( m = 0; m <= 9; m++)
{
_putchar(x+'0');
_putchar(y+'0');
_putchar(58);
_putchar(z+'0');
_putchar(m+'0');
_putchar('\n');
}
}
}
}
}
}

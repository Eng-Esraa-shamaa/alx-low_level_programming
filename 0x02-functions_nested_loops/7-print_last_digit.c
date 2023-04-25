#include "main.h"
/**
 *print_last_digit - the main function of the program
 *@n: the number for check
 *Description: prints the last digit of a number.
 *Return: the value of last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}

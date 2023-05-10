#include"main.h"
/**
 *check_prime - check if the n is prime
 *@n: the number to check
 *@j: the number for check
 *Return: one if prime else zero
 */
int check_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 1)
	{
		return (0);
	}
	return (check_prime(n, j - 1));
}
/**
 *is_prime_number - check if the n is prime
 *@n: the number to check
 *Return: one if prime else zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}

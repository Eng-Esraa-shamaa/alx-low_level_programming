#include "main.h"
/**
 *reverse_array - reverses the integers inside the array
 *@a : the array
 *@n :number of elements in array
 *Return: zero
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n = n - 1;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

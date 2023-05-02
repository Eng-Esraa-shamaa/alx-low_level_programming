#include "main.h"
#include<stdio.h>
/**
 *print_array -  prints an array
 *@a: is a pointer
 *@n: is the number of array
 *Return :zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

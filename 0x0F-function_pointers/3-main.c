#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - main function of program
 *@agrc: number of arguments
 *@argv: array of arguments
 *@a: first number
 *@b: second number
 *@s: the symbol
 *Return: zero when success
 */
int main(int argc, char *argv[])
{
	int a , b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		return(99);
	}
	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}

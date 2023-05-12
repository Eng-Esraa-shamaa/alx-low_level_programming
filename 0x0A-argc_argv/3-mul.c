#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - the main function of program
 *@argc: numer of arguments pased
 *@argv: array of arguments
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

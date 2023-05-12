#include"main.h"
#include<stdio.h>
/**
 *main - the mian function of the program
 *@argc: the number of arguments passed
 *@argv: array of arguments
 *Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

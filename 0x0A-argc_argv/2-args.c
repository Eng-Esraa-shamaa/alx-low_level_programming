#include"main.h"
#include<stdio.h>
/**
 *main - the main function of program
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

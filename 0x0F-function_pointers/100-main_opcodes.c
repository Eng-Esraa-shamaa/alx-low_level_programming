#include<stdio.h>
#include<stdlib.h>
/**
 *main - the main function prints opcode
 *@argc: number of arguments passed
 *@argv: arguments array
 *Return: zero when succes
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *oparr;

	oparr = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", oparr[i]);
		if (i == bytes - 1)
		continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - the main function of the program
 *@argc: the number of arguments in array
 *@argv: the array contains arguments
 *Return: zero in success case
 */
int main(int argc, char *argv[])
{
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		change++;
		if (money - 25 >= 0)
		{
			money = money - 25;
			continue;
		}
		if (money - 10 >= 0)
		{
			money = money - 10;
			continue;
		}
		if (money - 5 >= 0)
		{
			money = money - 5;
			continue;
		}
		if (money - 2 >= 0)
		{
			money = money - 2;
			continue;
		}
		money--;
	}
printf("%d\n", change);
if (money < 0)
{
return (0);
}
return (0);
}

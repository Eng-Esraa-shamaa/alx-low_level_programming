#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *op_add - adds two integers
 *@a: first int
 *@b:second int
 *Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subs two integers
 *@a: first int
 *@b: second int
 *Return: the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two integers
 *@a: first integer
 *@b: second integer
 *Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divids two integers
 *@a: first integer
 *@b: second integer
 *Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - modulus two integers
 *@a: first integer
 *@b:second integer
 *Return: the modulus between them
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

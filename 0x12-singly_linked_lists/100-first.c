#include"lists.h"
void myPrintFun(void) __attribute__ ((constructor));
/**
 *myPrintFun - function excutes before main
 *
 *Return: NOthing
 */
void myPrintFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

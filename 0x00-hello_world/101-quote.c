#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
/**
 *main - used to printout statement as it and returns one
 *write - function used to write the file descriptor
 *Description: Write a C program that prints excatly what i put onto it
 *Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}

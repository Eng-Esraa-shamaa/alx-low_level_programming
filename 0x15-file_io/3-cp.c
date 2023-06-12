#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *buff_creat - create a buffer
 *@file: file t work on
 *Return: buffer
 */
char *buff_creat(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 *close_f - function to handle when error occurs during close
 *@file: the file we work on
 *Return: nothing
 */
void close_f(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * check_argc - checks for arguments
 * @argc: number of arguments
 * Return: nothing
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 *main - the main function of program
 *@argc: count of args
 *@argv: args vector
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w, flag = 1;
	char *buff;

	check_argc(argc);
	buff = buff_creat(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	r = read(file_from, buff, 1024);
	while (r > 0 || flag)
	{
		flag = 0;
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(file_to, buff, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_f(file_to);
	free(buff);
	close_f(file_from);
	return (0);
}

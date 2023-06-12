#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it to the POSIX.
 *@filename: name of the file.
 *@letters: the letters of file
 *Return: zero when success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buff;
	ssize_t r, w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	r = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(fp);
	return (w);
}

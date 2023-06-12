#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 *create_file - function creats a file
 *@filename: the name of the file
 *@text_content: the content in the file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	w = write(fd, text_content, length);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

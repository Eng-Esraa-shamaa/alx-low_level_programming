#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *append_text_to_file - function appends text to a file
 *@filename: the name of file
 *@text_content: the text content
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_EXCL | O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	w = write(fd, text_content, length);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

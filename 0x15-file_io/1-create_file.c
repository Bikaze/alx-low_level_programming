#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
  *create_file - create a file
  *@filename: name of the file to read
  *@text_content: this is the text to put in our file
  *Return: 1 or -1 (success and failure respectively)
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	ssize_t written_bytes;

	if (!filename || !text_content)
		return (0);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (0);

	written_bytes = write(fd, text_content, strlen(text_content));

	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

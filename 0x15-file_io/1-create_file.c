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
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i])
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
		i++;
	}

	close(fd);

	return (1);
}

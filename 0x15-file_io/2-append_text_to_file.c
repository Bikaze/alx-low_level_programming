#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
  *append_text_to_file - append text to a file
  *@filename: name of the file to read
  *@text_content: this is the text to put in our file
  *Return: 1 or -1 (success and failure respectively)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

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

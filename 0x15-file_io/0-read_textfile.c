#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
  *read_textfile - read text file and print it to stdout
  *@filename: name of the file to read
  *@letters: number of letters(chars) to read and write
  *Return: the number of letters(chars) it read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t read_bytes;
	char *buffer;
	ssize_t written_bytes;

	buffer = malloc(sizeof(char) * letters);

	if (!filename || !buffer)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)
	{
		close(fd);
		return (0);
	}

	written_bytes = write(1, buffer, read_bytes);

	if (written_bytes == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);

	return (written_bytes);
}

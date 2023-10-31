#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
  *printError1 - print error for incorrect number of arguments
  *Return: nothing
  */
void printError1(void)
{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
}
/**
  *printError2 - print error about the file_from (argv[1])
  *@c: string name of file
  *Return: nothing
  */
void printError2(char *c)
{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file ", c);
	exit(98);
}
/**
  *printError3 - print error about the file_to (argv[2])
  *@c: string name of file
  *Return: nothing
  */
void printError3(char *c)
{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to ", c);
	exit(99);
}

/**
  *printError4 - print error for close system call
  *@d: file descriptor
  *Return: nothing
  */
void printError4(int d)
{
	dprintf(STDERR_FILENO, "%s %d\n", "Can't close fd ", d);
	exit(100);
}

/**
  *main - Entry point of hte program
  *@argc: argument count
  *@argv: argument vector
  *Return: nothing
  */

int main(int argc, char **argv)
{
	int fd, fd2, i = 1024;
	char buffer[1024];

	if (argc != 3)
		printError1();
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		printError2(argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd == -1)
		printError3(argv[2]);
	while (i == 1024)
	{
		i = 0;
		if (read(fd, buffer, 1024) == -1)
			printError2(argv[1]);
		while (buffer[i])
		{
			if (write(fd2, &buffer[i], 1) == -1)
				printError3(argv[2]);
			i++;
		}
	}
	if (close(fd) == -1)
		printError4(fd);
	if (close(fd2) == -1)
		printError4(fd2);
	return (0);
}


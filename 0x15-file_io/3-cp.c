#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: string
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	const char *file_to;
	const char *file_from;
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytesRead, bytesWrite;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit (99);
	}
	while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWrite = write(fd_to, buffer, bytesRead);
		if (bytesWrite == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit (100);
	}
	return (0);
}

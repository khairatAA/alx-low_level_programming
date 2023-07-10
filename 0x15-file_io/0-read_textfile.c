#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesWrite, bytesRead;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWrite == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (bytesRead);
}

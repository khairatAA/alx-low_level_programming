#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: string
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fp_to, fp_from;
	ssize_t bytesRead, bytesWrite;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fp_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_to);
		exit(98);
	}
	fp_from = open(file_from, O_RDONLY);
	if (fp_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while ((bytesRead = read(fp_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWrite = write(fp_to, buffer, bytesRead);
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
	if (close(fp_from) == -1 || close(fp_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
	return (0);
}

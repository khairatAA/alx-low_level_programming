#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fp = fopen(filename, "a");
		if (fp == NULL)
			return (-1);
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);

	return (1);
}

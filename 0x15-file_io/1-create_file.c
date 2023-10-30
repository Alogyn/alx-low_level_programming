#include "main.h"

/*
 * Task 1. Under the snow
 */

/**
  * create_file - Creates or truncates a file and writes text content to it
  *
  * @filename: Name of the file to create or truncate
  * @text_content: NULL terminated string to write to the file
  *
  * Return: '1' If success, '-1' if fail
  */

int create_file(const char *filename, char *text_content)
{
	/* Syscall declarations */
	int file_open, file_write;

	/* In case 'filename' is empty */
	if (!filename)
		return (-1);

	/* In case the file cannot be opned */
	file_open = open(filename, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_open == -1)
		return (-1);

	/* In case 'text_content' is empty */
	if (!text_content)
	{
		close(file_open);
		return (1);
	}

	file_write = write(file_open, text_content, strlen(text_content));
	/* Checks the write action fail */
	if (file_write < 0)
	{
		close(file_open);
		return (-1);
	}

	close(file_open);
	return (1);
}

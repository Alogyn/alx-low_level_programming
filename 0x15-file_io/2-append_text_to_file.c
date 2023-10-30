#include "main.h"

/*
 * Task 2. Speak gently, she can hear
 */

/**
  * append_text_to_file - Appends text at the end of a file
  *
  * @filename: Name of the file
  * @text_content: NULL terminated string to append to the file
  *
  * Return: '1' if success, '-1' if fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	/* Syscall and variable declarations */
	int file_open, file_write, length = 0;

	/* In case 'filename' is empty */
	if (!filename)
		return (-1);

	file_open = open(filename, O_WRONLY | O_APPEND);

	/* In case file cannot be open */
	if (file_open == -1)
		return (-1);

	/* In case 'text_content' is not empty */
	if (text_content)
	{
		while (text_content[length])
			length++;
	}

	file_write = write(file_open, text_content, length);

	/* In case witre action fail */
	if (file_write == -1)
	{
		close(file_open);
		return (-1);
	}

	close(file_open);
	return (1);
}

#include "main.h"

/*
 * Task 0. Tread lightly, she is near
 */

/**
  * read_textfile - Reads a text file and prints it
  * to the 'POSIX' standard output
  *
  * @filename: Name of the file to be read
  * @letters: Number of letters to be read and printed
  *
  * Return: The number of letters read and printed, otherwise '0' if fail
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* syscalls and memory declarations */
	ssize_t file_write, file_read;
	int file_open = open(filename, O_RDONLY);
	char *buffer = malloc(letters);

	/* In case the '*filename' is empty */
	if (!filename)
		return (0);
	/* In case the 'filename' cannot be opened */
	if (file_open == -1)
		return (0);
	/* In case allocated memory fail */
	if (!buffer)
	{
		close(file_open);
		return (0);
	}

	/* In case read file fail, free the memory and close file */
	file_read = read(file_open, buffer, letters);
	if (file_read == -1)
	{
		free(buffer);
		close(file_open);
		return (0);
	}

	/* In case write action fail, free memory and close the file */
	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write == -1 || file_write != file_read)
	{
		free(buffer);
		close(file_open);
		return (0);
	}

	free(buffer);
	close(file_open);
	return (file_write);
}

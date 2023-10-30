#include "main.h"

/*
 * Task 3. cp
 */

#define BUFF_SIZE 1024

#define USAGE_ERROR 97
#define READ_ERROR 98
#define WRITE_ERROR 99

/**
  * print_error_and_exit - Prints an error message and exits the program
  *
  * @error_msg: The error message to be printed
  * @exit_code: The exit code for the program
  *
  * Return: None
  */

void print_error_and_exit(const char *error_msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_msg);
	exit(exit_code);
}

/**
  * close_file_descriptor - Closes a file descriptor and handles errors
  *
  * @fd: The file descriptor to be closed
  * @exit_code: The exit code for the program
  *
  * Return: None
  */

void close_file_descriptor(int fd, int exit_code)
{
	if (close(fd) == -1)
		print_error_and_exit("Error: Can't close file descriptor", exit_code);
}

/**
  * open_file - Opens a file and handles errors
  *
  * @filename: The name of the file to be opened
  * @flags: The flags to be used while opening the file
  * @mode: The file permission mode
  * @exit_code: The exit code for the program
  *
  * Return: The file descriptor of the opened file (fd)
  */

int open_file(const char *filename, int flags, mode_t mode, int exit_code)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(exit_code);
	}

	return (fd);
}

/**
  * copy_file - Copies the content of one file to another file
  *
  * @file_from: The source file
  * @file_to: The destination file
  *
  * Return: None
  */

void copy_file(const char *file_from, const char *file_to)
{
	/* Open source and destination files */
	int source_fd = open_file(file_from, O_RDONLY, 0, READ_ERROR);
	int destination_fd = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | 
			_IROTH, WRITE_ERROR);
	char buffer[BUFF_SIZE];
	ssize_t file_read, file_write, total_write = 0;

	/* Copy content from source to destination in chunks */
	while ((file_read = read(source_fd, buffer + total_read,
					BUFF_SIZE - total_read)) > 0)
	{
		total_read += file_read;
		if (total_read == BUFF_SIZE)
			file_write = write(destination_fd, buffer, BUFF_SIZE);
		else
			file_write = write(destination_fd, buffer, total_read);
		if (file_write <= 0)
			print_error_and_exit("Error: Can't write to file",
					WRITE_ERROR);
		if (total_read == BUFF_SIZE)
			total_read = 0;
	}
	if (file_read == -1)
		print_error_and_exit("Error: Can't read from file", READ_ERROR);

	close_file_descriptor(source_fd, READ_ERROR);
	close_file_descriptor(destination_fd, WRITE_ERROR);
}

/**
  * main - Entry point of the program
  *
  * @argc: The number of command-line arguments
  * @argv: An array containing the command-line arguments
  *
  * Return: '0' if success, exit if fail
  */

int main(int argc, char *argv[])
{
	/* Check for correct number of arguments */
	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to", USAGE_ERROR);
	/* Copy content from source to destination file */
	copy_file(argv[1], argv[2]);

	return (0);
}

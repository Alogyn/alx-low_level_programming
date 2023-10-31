#include "main.h"

/*
 * Task 3. cp
 */

/**
  * check97 - Checks for the correct number of arguments
  *
  * @argc: The number of arguments
  *
  * Return: None
  */

void check97(int argc)
{
	/* Check if the number of arguments is not 3 */
	if (argc != 3)
	{
		/* Print usage message to standard error and exit */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
  * check98 - Checks that file_from exists and can be read
  *
  * @check: Checks if true of false
  * @file: The file_from name
  * @fd_from: The file descriptor of file_from, or -1
  * @fd_to: The file descriptor of file_to, or -1
  *
  * Return: None
  */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	/* In case syscall fail */
	if (check == -1)
	{
		/* Print error message to standard error */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);

		/* Close file descriptors if they are open */
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
  * check99 - Checks that file_to was created and/or can be written to
  *
  * @check: Checks if true of false
  * @file: The file_to name
  * @fd_from: The file descriptor of file_from, or -1
  * @fd_to: The file descriptor of file_to, or -1
  *
  * Return: None
  */

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	/* In case syscall fail */
	if (check == -1)
	{
		/* Print error message to standard error */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		/* Close file descriptors if they are open */
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
  * check100 - Checks that file descriptors were closed properly
  *
  * @check: Checks if true or false
  * @fd: The file descriptor
  *
  * Return: None
  */

void check100(int check, int fd)
{
	/* In case syscall fail */
	if (check == -1)
	{
		/* Print error message to standard error */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
  * main - Copies the content of a file to another file
  *
  * @argc: The number of arguments passed
  * @argv: The array of pointers to the arguments
  *
  * Return:'0' if success
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	/* Check for correct number of arguments */
	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	/* Check if file_from was opened successfully */
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	/* Check if file_to was opened successfully */
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	/* Read and write in chunks of 1024 bytes */
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}

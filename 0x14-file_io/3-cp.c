#include "holberton.h"
/**
 * usage_fail - prints error msg if number of args is wrong
 * Return: none
 */
void usage_fail(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * read_fail - prints error msg if fd_from doesn't exist or can't read from it
 * @file: pointer to a file
 * Return: none
 */
void read_fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * write_fail - prints error msg if you can't create or write to a fd_to
 * @file: pointer to a file
 * Return: none
 */
void write_fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * close_fail - prints error msg if you can't close a file descriptor
 * @fd: the file descriptor
 * Return: none
 */
void close_fail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - check the code for Holberton School students.
 * @ac: argument count
 * @av: aruments
 * Return: Always 0.
 * Usage: cp file_from file_to, followed by a new line, on the POSIX std error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buffer;

	if (ac != 3)
		usage_fail();
	if (av[1] == NULL)
		read_fail(av[1]);
	if (av[2] == NULL)
		write_fail(av[2]);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		read_fail(av[1]);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_to == -1)
		write_fail(av[2]);
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
		return (1);
	bytes_read = read(fd_from, buffer, BUFF_SIZE);
	if (bytes_read == -1)
		read_fail(av[1]);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			write_fail(av[2]);
		bytes_read = read(fd_from, buffer, BUFF_SIZE);
		if (bytes_read == -1)
			read_fail(av[1]);
	}
	if (close(fd_from) == -1)
		close_fail(fd_from);
	if (close(fd_to) == -1)
		close_fail(fd_to);
	free(buffer);
	return (0);
}

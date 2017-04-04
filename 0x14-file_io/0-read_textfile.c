#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read from
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if: the file can
 *          not be opened or read, filename is NULL or if write fails or does
 *          not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, closed;
	char *buffer;
	int bytes_read, bytes_written;

	if (filename == NULL || letters <= 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read != bytes_written)
	{
		free(buffer);
		return (0);
	}
	if (bytes_written == -1)
	{
		free(buffer);
		return (0);
	}
	closed = close(fd);
	if (closed == -1)
	{
		free(buffer);
		return (-1);
	}
	free(buffer);
	return (bytes_written);
}

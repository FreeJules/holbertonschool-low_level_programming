#include "holberton.h"
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * create_file - creates a file, must have permissions: rw-------
 * If the file already exists, do not change the permissions.
 * @filename:  the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *  (file can not be created, file can not be written, write "fails", etc...)
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written, closed;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	bytes_written = write(fd, text_content, len);
	closed = close(fd);
	if (closed == -1)
		return (-1);
	if (bytes_written == -1)
		return (-1);
	return (1);
}

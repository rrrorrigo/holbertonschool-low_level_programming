#include "holberton.h"
/**
 * create_file - function that create a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}

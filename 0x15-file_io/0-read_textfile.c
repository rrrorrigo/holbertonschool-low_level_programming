#include "holberton.h"
/**
 * read_textfile - function that read a file
 * @filename: file to read.
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, if it fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nLetters;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	nLetters = read(fd, buffer, letters);
	if (nLetters < 0)
		return (0);
	nLetters = write(STDOUT_FILENO, buffer, nLetters);
	if (nLetters < 0)
		return (0);
	free(buffer);
	close(fd);
	return (nLetters);
}

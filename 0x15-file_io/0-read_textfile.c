#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	i = read(fd, buff, letters);
	if (i < 0)
	{
		free(buff);
		return (0);
	}
	buff[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buff, i);
	if (y < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);

	return (y);
}

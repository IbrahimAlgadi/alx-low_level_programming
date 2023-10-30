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
	char *buff;
	int rc; /* read character counters */
	int wc; /* write character counters */
	int fp;  /* File descriptor */

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	rc = read(fp, buff, letters);
	if (rc < 0)
	{
		free(buff);
		return (0);
	}
	buff[rc] = '\0';
	close(fp);

	wc = write(STDOUT_FILENO, buff, rc);
	free(buff);

	if (wc < 0)
		return (0);

	return (wc);
}

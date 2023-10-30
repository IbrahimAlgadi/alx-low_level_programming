#include "main.h"

/**
 * create_file - Create a function that creates a file.
 *
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, wc = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[wc])
			wc++;
		x = write(fd, text_content, wc);
		if (x != wc)
			return (-1);
	}

	close(fd);

	return (1);
}
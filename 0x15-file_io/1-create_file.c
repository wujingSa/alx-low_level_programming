#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: name of the file
 * @text_content: content to be written in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rwr, nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

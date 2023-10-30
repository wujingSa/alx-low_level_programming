#include "main.h"

/**
 * read_textfile - reads a text file and prints its contents
 * @filename: pointer to the name of the file
 * @letters: number of letters to print
 *
 * Return: the number of letters printed. If an error occurs, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	return (0);

	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);

	close(fd);

	free(buffer);

	return (n_written);
}

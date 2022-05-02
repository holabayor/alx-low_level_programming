#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: the number of letters to be read
 * Return: Number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nr, nw;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	nr = read(fd, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);
	close(fd);
	free(buff);

	return (nw);
}
